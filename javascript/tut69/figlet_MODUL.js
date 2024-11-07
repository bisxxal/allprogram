var figlet = require("figlet");

figlet("BISXXAL " ,function(err , data){
    if(err){
        // console.log
        console.log("Somethiing happen wrong ",err);
        return;
    }
    console.log(data);
});
 