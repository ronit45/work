// console.log("H")
// console.log("I")
// console.log("T")
// console.log("E")
// console.log("S")
// console.log("H")

function sayName(){
    console.log("H")
    console.log("I")
    console.log("T")
    console.log("E")
    console.log("S")
    console.log("H")
}

//sayname refernce sayname() execute
// sayName()

// function addTwoNumbers(num1, num2){
//     console.log(num1 + num2);
// }


addTwoNumbers(3,4)
addTwoNumbers(3, "4")
addTwoNumbers(3, "a")
addTwoNumbers(3, null)

function addTwoNumbers(num1, num2){ // defining types is not necessary
    return num1 + num2  // using return
}
let res = addTwoNumbers(3,4)
console.log(res)

function loginUserMessage(username){
    if(username == undefined){
        console.log("please enter a username")
        return
    }
    return `${username} just logged in`
}

// define the parameter 
// function loginUserMessage(username = "sam"){
//     if(username == undefined){
//         console.log("please enter a username")
//         return
//     }
//     return `${username} just logged in`
// }

console.log(loginUserMessage("hitesh"))
// out hitesh just logged in
console.log(loginUserMessage())
// out undefined just logged in

// shopping cart
// price adding
// rest operator ... it puts many values in array
function calcCartPrice(...num1){
    return num1
}

// taking more items increasing items
// console.log(calcCartPrice(1,200))

const user ={
    username : "hitesh",
    prices : 199
}

function handleObject(anyObject){
    console.log(`Username is ${anyObject.username} and price is ${anyObject.price}`)
}

handleObject(user)

const arr = [200,300,400,600]
function returnSecondValue(arr){
    return arr[1]
}

console.log(returnSecondValue(arr))