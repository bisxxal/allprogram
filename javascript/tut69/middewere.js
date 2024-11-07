
const express = require("express");
const app = express();

app.use(function(req, res, next) {  
    console.log('this is middewire ');  
    // console.log(req);  
    // console.log("the request is " , res);  
    next();  
  }); 
  
app.get("/", (req, res) => {
res.send(`<div>
	<h2>Welcome to GeeksforGeeks</h2>
	<h5>Tutorial on Middleware</h5>
</div>`);
});
app.get("/help" ,(req ,res) =>{
    res.send("bisxxal is a 7 star coader ");
})
// app.listen(port, () => {
// console.log(`Listening to port ${port}`);
// });

app.listen(3000);
