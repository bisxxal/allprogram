const express = require('express');

const app = express();

app.set("view engine" , "ejs");

// app.get('/' ,(req, res) =>{
//     // res.render('view.ejs', index);  
//     res.render("index");
// });
app.get('/', (req, res) => {
    res.render('index');
});
app.get('/contact', (req, res) => {
    res.render('contact',);
    res.render('contact',{data :"bisxxal is heare"});
});
app.get('/try', (req, res) => {
    res.render('try' ,{data :"bisxxal is heare"});
});

app.listen(3000);


// var express = require('express');  
// var app = express();

// app.set("view engine","ejs")  
// app.get('/', function (req, res) {  
// res.render('view.ejs', index);  
//  res.render('index');  
// });  
// var server = app.listen(5000, function () {  
//     console.log('Node server is running..');  
// });  