// Immediately Invoked Fuction Expressions (IIFE)

// global scope ke variable ko hatene ke liye

// named iife
(function chai(){
    console.log(`DB connected`)
})(); // semicolon should be added

// unnamed iffe
(
    (name) => {
        console.log(`Db connected ${name}`)
    }
) ('hitesh')