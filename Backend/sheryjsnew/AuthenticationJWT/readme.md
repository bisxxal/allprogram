  <!-- for encript data -->
  
   bcrypt.genSalt(10, function(err, salt) {
        bcrypt.hash('pollolo', salt, function(err, hash) {
          console.log(hash);
        });
    });
    

<!-- for cheak data is true or not -->
    bcrypt.compare('pollolo', '$2b$10$CjO/hglGB0JvzlHKX0/TlOVRnU9EDd5FWfbkAF8HRfJwYSNUpeomu', function(err, result) {
                
        console.log(result);
    });
    


    app.get('/',(req,res)=>{
    // bcrypt.genSalt(10, function(err, salt) {
    //     bcrypt.hash('pollolo', salt, function(err, hash) {
    //       console.log(hash);
    //     });
    // });
    // $2b$10$cAjWKcBAwcY1piJBeg5T.uMS3yaCIFMd2BDLCKAcjsFI9R0ZYroTS

    bcrypt.compare('pollolo', '$2b$10$CjO/hglGB0JvzlHKX0/TlOVRnU9EDd5FWfbkAF8HRfJwYSNUpeomu', function(err, result) {
                
        console.log(result);
    });
    res.send('hey')

}) 


app.get('/',(req,res)=>{
         let token = jwt.sign({email:'bishal8594@2gmail.com'} , 'secret');
            // console.log(token);
            res.cookie('token' ,token)
          res.send('done')

}) 
app.get('/read',(req,res)=>{
    // console.log(req.cookies.token);
    let data = jwt.verify(req.cookies.token, 'secret');
    console.log(data);
    res.send('hey')

}) 
