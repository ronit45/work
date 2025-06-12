//how data is stored and accessed
//primitive
// 7 types
// String, Number, Boolean, null , undefined, Symbol, Bigint
// 
const score = 100
const islogged = false
const outsidetemp = null
let userEmail; // undefined


const id = Symbol('123')
const anotherid = Symbol('123')
 //console.log(id === anotherid)

const bignumber = 231313131231233n // at last write n to convert to big int
//
// reference (non primitve)
// Array, Objects, Functions
const heros = ["shaktiman" , "nagraj" , "doga"]
//anything btw curly braces is object
let myObj = {
    name : "hites",
    age : 22,
}
const myfunction = function(){
    console.log("hello world")
}
console.log(typeof score)