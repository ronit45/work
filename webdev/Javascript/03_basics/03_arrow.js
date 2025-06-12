// function chai(){
//     let username = "hitesh" // let is used which gets undefined
//     console.log(this.username)
// }
// chai()

const chai = () => {
    let username = "hitesh"
    console.log(this.username)
}

chai()
// arrow function
// const addTwo = (num1, num2) => {
//     return num1 + num2
// } // neccessary to write return in curly braces

// console.log(addTwo(3,4))
let addTwo = (num1, num2) => num1 + num2
addTwo = (num1, num2) => (num1 + num2) // no return statement required in parenthesis


// use of curly braces to return object 
addTwo = (num1,num2) => ({username : "hitesh"})
console.log(addTwo(3,4))

