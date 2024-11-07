const path= require('path')
const multer  = require('multer')

const storage = multer.diskStorage({
    destination: function (req, file, cb) {
      cb(null, './public/images/uploads')
    },
    filename: function (req, file, cb) {
      const uniqueSuffix = Date.now() + '-' + Math.round(Math.random() * 1E9) +path.extname(file.originalname)
      cb(null, uniqueSuffix)
    }
  })
  
  const upload = multer({ storage: storage })

  module.exports =upload