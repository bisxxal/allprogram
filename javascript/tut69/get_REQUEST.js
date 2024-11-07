var express = require("express");
var app = express();
app.post("/", function (req, res) {
  res.send( "i am get request "  );

});
// var server = app.listen(8000, function () {
//   var host = server.address().address;
//   var port = server.address().port;
//   console.log("Example app listening at http://%s:%s", host, port);
// });

app.listen(8000);