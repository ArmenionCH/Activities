const express = require('express')
const path = require('path')

const letterRoute = require('./routes/letters')

const app = express()

app.set('view engine', 'ejs')
app.set('views', path.join(__dirname, 'views'))


app.use('/letters', letterRoute)

app.get('/', (req, res) =>{

    res.render('index')
})

app.listen(3000)


