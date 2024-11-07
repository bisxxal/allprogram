const express = require('express')
const app = express()

app.get('/', function (req, res) {
  res.send('Hello  bisxxal is a 5 star coder ')
})
app.get('/profile', function (req, res) {
  res.send('bisxxal is a 5 star coder in gfg profile ')
})

app.get('/like', function (req, res) {
  res.send('welcome to bisxxal like count ')
})

app.get('/setting', function (req, res) {
  res.send('change your setting  ')
});

app.listen(3000);


// var express = require('express');
// var app = express();

// app.get('/', function (req, res) {
//    res.send('Hello World');
// })

// var server = app.listen(8081, function () {
//    var host = server.address().address
//    var port = server.address().port
   
//    console.log("Example app listening at http://%s:%s", host, port)
// })