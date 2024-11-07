const fs = require('fs');
let text = fs.readFileSync("del.txt" , "utf-8");

text = text.replace("going" , "comeing ")
console.log(text);

fs.writeFileSync("new.txt" , text)