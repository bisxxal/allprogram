const express = require('express')
const app = express()
const userModel = require('./models/users')
const postModel = require('./models/post')
app.get('/',(req , res)=>{
    res.send('hey');
})
app.get('/post/create',async(req , res)=>{
    
  let post = await postModel.create({
        postdata:'hello',
        user:'6633f297b212d84b7a4419c8',
    })

    let user  = await userModel.findOne({_id:'6633f297b212d84b7a4419c8'});
    user.posts.push(post._id);
    res.send({user , post})
})
app.get('/create',async(req , res)=>{
   let user = await userModel.create({
    userName : 'bishal',
    email : 'bisx@gmail.com',
    age : 20,
    post : Array
    })

    res.send(user)
})

app.listen(3000)