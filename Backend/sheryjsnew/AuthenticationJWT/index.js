const cookieParser = require('cookie-parser');
const express = require('express')
const bcrypt = require('bcrypt')
const path = require('path')
const app = express();
const userModel = require('./models/user')
const jwt = require('jsonwebtoken');

app.use(express.json())
app.use(express.urlencoded({extended:true}))
app.set('view engine','ejs');
app.use(express.static(path.join(__dirname,"public")));
app.use(cookieParser())

app.get('/',(req,res)=>{
    res.render('index')
}) 
app.post('/create',async(req,res)=>{
    let {userName , email , password , age} = req.body;

 bcrypt.genSalt(10, function(err, salt) {
        bcrypt.hash(password, salt,async function(err, hash) {
            let createUser = await userModel.create ({
                userName, 
                password:hash,
                age,
                email
            })
        
       let token =  jwt.sign({email} ,'secreactkey');
        res.cookie('token' , token )
          res.send(createUser)

        });
    });
})

app.get('/logout' , (req , res)=>{
    res.cookie('token' , '')
    res.redirect('/')
})
app.get('/login' , (req , res)=>{
    res.render('login')
})
app.post('/login' , async(req , res)=>{
  let user =  await userModel.findOne({email:req.body.email})
  if(!user) return res.send('Something went is wrong');

   bcrypt.compare(req.body.password, user.password, function(err, result) {
       
        if(result === true) {            
            let token =  jwt.sign({email:user.email} ,'secreactkey');
            res.cookie('token' , token )
            res.send('Loged in')
             
        }
        else {
            res.send('Not logined') 
        
        }
            
    });
  
})
app.listen(3000)