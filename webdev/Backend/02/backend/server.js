import express from 'express'

const app = express()

// app.get('/', (req,res) => {
//     res.send('Server is ready')
// })
const port = process.env.PORT || 3000;

app.listen(port, () => {
    console.log(`server is serving at ${port}`)
})

app.get('/api/jokes', (req,res) => {
    const jokes = [
        {
            id: 1,
            title : 'joke',
            content: 'this is a joke'
        },
        {
            id: 2,
            title:'another joke',
            content: 'this is another joke'
        }

    ]
    res.send(jokes)
})