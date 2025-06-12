const score = 400
// console.log(score)
const balance = new Number(100)
// console.log(balance);
// console.log(balance.toString()) // this converts num to string
// console.log(balance.toString().length) // length of the converted string

// console.log(balance.toFixed(2)); // precion after decimal to two digits


let othernum = 23.8966
// othernum = 123.866
// othernum = 1123.866
// console.log(othernum.toPrecision(3))

const hundreds = 1000000
// console.log(hundreds.toLocaleString())

// +++++++++++ Maths +++++++++++++++++++++++++++++++++

    // console.log(Math);
    // console.log(Math.abs(-4))
    // console.log(Math.log(4))
    // console.log(Math.round(4.2))
    // Math.ceil
    // Math.floor
    // console.log(Math.min(4,2,1,4))
    // console.log(Math.max(4,11,10,10.6))

console.log(Math.random()) // range from 0 to 1
console.log((Math.random()*10) + 1) // range from 1 to  10
// use floor above to get without decimal


const min = 10
const max = 20

console.log(Math.floor(Math.random() * (max - min + 1)) + min)
// math.random range 0<= x < 1
//  floor(x*11 + 10)
// x can be 0.9999 so x*11 can give 10.9999
//  floor( 10.999 + 10 )  = 20 which includes max
//  likewise ( 0.00009* 11 ) = 0
// floor( 0 + 10) = 10 which includes min
