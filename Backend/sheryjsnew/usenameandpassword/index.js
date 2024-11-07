const express = require('express')
const app = express()
const path = require('path')  
const useModel = require('./models/user') 
app.use(express.json())
app.use(express.urlencoded({extended:true}))
app.set('view engine','ejs');
app.use(express.static(path.join(__dirname,"public")));

app.get('/',(req,res)=>{
    res.render('index.ejs')
})

app.get('/read',async(req,res)=>{
  let alluser =   await useModel.find()
    res.render('read.ejs' , {users:alluser})
})
  
app.get('/delete/:id',async(req,res)=>{
  let deleteuser =   await useModel.findOneAndDelete({_id:req.params.id})
    res.redirect('/read')
})

app.get('/edit/:id',async(req,res)=>{
  let alluser =   await useModel.findOne({_id:req.params.id})
    res.render('edit.ejs' ,{users:alluser })
})

app.post('/create',async(req,res)=>{

   let {name ,email ,image} = req.body; 
   const userName = await useModel.create({
        name,
        email,
        image
    });
    res.redirect('/read'  )
})

app.post('/update/:userid',async(req,res)=>{

   let {name ,email ,image} = req.body; 
   const userName = await useModel.findOneAndUpdate({_id:req.params.userid},{name, email,image} , {new:true});
    res.redirect('/read')
})

app.listen(3000)