const express = require('express')
const bodyParser = require('body-parser')
 
const app = express()
 
app.use(bodyParser.json())
app.use(bodyParser.urlencoded({ extended: false }))
 
app.get('/', (req, res) => {

  res.sendFile(__dirname + '/login.html')
})
 
app.post('/login', (req, res) => {
    let username = req.body.username;
    // console.log(username);
    let password = req.body.password;
    if (username === 'admin' && password === 'bisxxal') {
        res.send('Login successful');
    }
    else {
        res.send('Login failed');
    }
}) 
 app.get('/helll?ocd', (req, res) => {
  res.send('ab?cd')
})

app.listen(3000);
