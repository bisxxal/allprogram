const express = require('express')
const app = express()
const path = require('path') 
const  useModel = require('./usermodel');

app.use(express.json())
app.use(express.urlencoded({extended:true}))
app.set('view engine','ejs');
app.use(express.static(path.join(__dirname,"public")));


app.get('/' , (req,res)=>{
    res.send("sdlkjhck")
})

app.get('/create' , async(req,res)=>{
   
const createduser =  await useModel.create({
        name:'bisxxal',
        userName : 'k',
        email:"bisxxal@ggmail.com"
    })

    res.send(createduser)
}) 



app.get('/read' , async(req,res)=>{
   
const finduser =  await useModel.find( )

    res.send(finduser)
}) 
app.get('/update' , async(req,res)=>{
    let updateduser =await useModel.findOneAndUpdate({name:'bisxxal'},{name:'gudul'},{new:true})
    res.send(updateduser);
})
app.get('/delete' , async(req,res)=>{
    let deleteuser =await useModel.findOneAndDelete({userName:'k'} )
    res.send('deleted');
})

app.listen(3000)