// array

const arr = [ 0, 1, 2, 3, true, "string"]

// array is object stores multiples items
// array is resizable 
// mixed of types
// zero based indexed
// shallow copy is which share same refernce
// deep copy which have diffenent refernce address
const myHeros = ["superman" , "batman"]
const arr2 = new Array(1,2,3,4)
console.log(arr2[0])

// important methods
arr2.push(6) // pushing elements
arr2.pop() // last element is popped out
arr2.unshift(0) // adds element at start 
// its time consuming process as it shifts all elements one step
arr2.shift() // shifts left all elements

console.log(arr2.includes(9)) // returns if element is present or not
console.log(arr2.indexOf(9)) // returns -1 as not present

const newArr = arr2.join() 

console.log(newArr)
console.log(typeof newArr) //string 

console.log()

// slice, splice

console.log("A ", arr2);
const myn1 = arr2.slice(1,3) // includes 1 2 indices
console.log("B ", arr2) // but does not changes original array
console.log("temp " ,myn1)

const myn2 = arr2.splice(1,3) // includes 1 2 3 indices
console.log("C " , arr2)// but takes that part out of array which it includes
console.log("temp " ,myn2)
