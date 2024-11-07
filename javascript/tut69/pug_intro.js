const express = require('express');
const path = require('path')
const fs = require('fs')
const app = express();
//EXPRESS SPECIFIC STUFF
app.use('/static', express.static( 'static'));               //for serveing ststic files 

app.use(express.urlencoded())

app.set('view engine', 'pug')
app.use('/static', express.static(path.join(__dirname, 'views')))        //set as  views directory
// app.set('views engine' , 'pug');

app.get('/' , (req, res)=>{
    res.render("home" ,{ title: 'Hey', message: 'Hello there!' });
});

app.post('/', (req, res)=>{
    name = req.body.name
    age = req.body.age
    gender = req.body.gender
    address = req.body.address
    more = req.body.more

    let outputToWrite = `the name of the client is ${name}, ${age} years old, ${gender}, residing at ${address}. More about him/her: ${more}`
    fs.writeFileSync('output.txt', outputToWrite)
    const params = {'message': 'Your form has been submitted successfully'}
    res.status(200).render('home.pug', params);

})

app.listen(3000);