let myDate = new Date()
console.log(myDate.toString())
console.log(myDate.toDateString())
console.log(myDate.toLocaleString())
console.log(typeof myDate)

console.log(" ")
// let myDate2 = new Date(2023, 0 , 23)
// let myDate2 = new Date(2023, 0 ,23, 5, 3)
// let myDate2 = new Date("2023-01-14")
let myDate2 = new Date("01-14-2023")

console.log(myDate2.toDateString())
console.log(myDate2.toLocaleString())

// let myTimeStamp = Date.now() 
// console.log(myTimeStamp) // time now in milli seconds from 1980s
// console.log(myDate2.getTime())

// get time in seconds
console.log(Math.floor(Date.now()/ 1000))

let newDate = new Date()
console.log(newDate)
console.log(newDate.getMonth() + 1)
console.log(newDate.getDay())

newDate.toLocaleString('default' , {
    weekday : "long"
    
})