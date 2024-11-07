const express = require("express");
const cookieParser = require('cookie-parser')
const jwt = require('jsonwebtoken')
const bcrpt = require('bcrypt')
const userModel = require("./models/user")
const postModel = require("./models/post")
const app = express()
const path= require('path')
const upload = require('./config/multerconfig')

app.use(express.json())
app.use(cookieParser())
app.use(express.urlencoded({extended:true}))
app.use(express.static(path.join(__dirname,'public')))
app.set('view engine','ejs'); 
 

app.get('/',(req, res)=>{

    res.render('index')
})

app.post('/register',async(req, res)=>{
    let {userName , name ,email  , password   } = req.body;

    let user = await userModel.findOne({email:email})
    if (user) return res.status(500).send('user already register')

    bcrpt.genSalt(10 , (err , salt)=>{
            bcrpt.hash(password ,  salt , async(err, hash)=>{
                let user  = await userModel.create({
                    userName,
                    email,
                    name,
                    password:hash
                });

           let token = jwt.sign({email:email,userid:user._id } , 'screatekey')
           res.cookie('token' , token)
           res.redirect('profile')
            })
    })
})
app.get('/login',(req, res)=>{
    res.render('login')
})
app.get('/logout',(req, res)=>{
    res.cookie('token' , '')
    res.redirect('/')
})


app.post('/login',async(req, res)=>{
    let { email  , password   } = req.body;

    let user = await userModel.findOne({email:email})
    if (!user) return res.status(500).send('somthing went wrong')

     bcrpt.compare(password , user.password ,(err ,result)=>{
        if(result){
            let token = jwt.sign({email:email,userid:user._id } , 'screatekey')
            res.cookie('token' , token)
            res.status(200).redirect('/profile')
        } 
            else res.redirect('/')
     })
})

app.get('/profile/upload',(req, res)=>{
    res.render('profileupload')
})

app.get('/profile',isloggedin,async(req, res)=>{
    let user = await userModel.findOne({email:req.user.email}).populate('posts')
    
    res.render('profile',{user})
})
app.post('/upload',isloggedin,upload.single('images'),async(req, res)=>{
    
    let file  =await userModel.findOne({email:req.user.email})

    file.profilePic = req.file.filename
    await file.save()

    res.redirect('/profile')
})


app.get('/like/:id',isloggedin,async(req, res)=>{
    let post = await postModel.findOne({_id:req.params.id}).populate('user')
    
    if (post.likes.indexOf(req.user.userid) === -1) {
        post.likes.push(req.user.userid)
    }
    else{
        post.likes.splice(post.likes.indexOf(req.user.userid) ,1)
    }
   
    await post.save();
    res.redirect('/profile')
})
app.get('/edit/:id',isloggedin,async(req, res)=>{
    let post = await postModel.findOne({_id:req.params.id})  
    res.render('edit' ,{post})
})
app.post('/update/:id',isloggedin,async(req, res)=>{
    let {content } =req.body
    let post = await postModel.findOneAndUpdate({_id:req.params.id},{content: content})  
    await post.save()

    res.redirect('/profile')
})
app.post('/post',isloggedin,async(req, res)=>{
    let user = await userModel.findOne({email:req.user.email})
    let {content } =req.body
    let post = await postModel.create({
        user:user._id,
        content
    })
    user.posts.push((post._id))
    await user.save()
    
    res.redirect('profile' )
})

    function isloggedin(req, res ,next){
        if(req.cookies.token === '') res.redirect("/login");
        else{
           let data = jwt.verify(req.cookies.token , 'screatekey')
            req.user = data;
            next()
        }
       
    }
app.listen(3000)