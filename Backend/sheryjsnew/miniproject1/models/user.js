const mongoose = require('mongoose')

mongoose.connect('mongodb://127.0.0.1:27017/miniproject')

const userSchema  =  mongoose.Schema({
    userName : String,
    email:String,
    name:String,
    password:String,
    posts:[{
        type:mongoose.Schema.Types.ObjectId,
        ref:'post'
    }],
    profilePic:{
        type:String,
        default:'default.jpg',
    }
})

module.exports = mongoose.model('user' ,userSchema)
 