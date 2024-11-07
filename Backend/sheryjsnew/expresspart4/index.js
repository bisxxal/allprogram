const express = require('express')
const app = express()
const path = require('path')
const fs = require('fs')
app.use(express.json())
app.use(express.urlencoded({extended:true}))
app.set('view engine','ejs');
app.use(express.static(path.join(__dirname,"public")));


app.get('/',(req,res)=>{
    fs.readdir(`./files` , (err , files)=>{
        res.render('index.ejs' , {files:files})

    })
}) 
app.get('/files/:filename', (req, res) => {
    const filePath = `./files/${req.params.filename}`;
    fs.readFile(filePath, 'utf-8', (err, filedata) => {
         
        res.render('show.ejs' ,{filename:req.params.filename.split('.txt').join(' ') , filedata :  filedata }  );  
    });
});


app.get('/edit/:filename', (req, res) => {
     res.render('edit.ejs' ,{filename:req.params.filename} )

     fs.rename(`./files/${req.params.filename}` , `./files/${req.params.new}`)
});

app.post('/create',(req,res)=>{
   fs.writeFile(`./files/${req.body.title.split(' ').join('')}.txt` , req.body.details ,(err)=>{
    res.redirect('/' )
   })
})
app.post('/edit',(req,res)=>{ 
    fs.rename(`./files/${req.body.prev}` , `./files/${req.body.new}`,(err)=>{
        res.redirect('/')
    })
})

app.listen(3000)




