

 // scope is {}
// if(true){
//     let a = 10
//     const b = 20
//     var c = 30
// }
// // if variable is not declared
// // it is default set to (var) type
// // dont use var
// // console.log(a)
// // console.log(b)
//  console.log(c)

let a = 100
if(true){
    let a = 10
    console.log("Inner: ", a)
}
console.log(a)

function one(){
    const username = "hitesh"
    function two(){
        const website = "youtube"
        console.log(username)
    }
    //console.log(website)
    two()
}
one()

// function call before declaration
console.log(addone(5))  // it works

function addone(num){
    return num + 1
}



addTwo(5) // it does not works
const addTwo = function(num){
    return num + 2
}