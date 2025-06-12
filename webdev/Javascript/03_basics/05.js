let numbers = [1,2,3,4,5,6,7]

//const newNum = numbers.map ( (num) => { return num + 10})
// console.log(newNum)

// -------- chaining ----------
//  numbers.map().map()
const newNums = numbers.map( (num) => num*10 )
                    .map( (num) => num + 1 )
                    .filter( (num) => num >= 40 )
console.log(newNums)

// --------- reduce method -------
let myNums = [1,2,3]


// loop  which returns 
let myTotal = myNums.reduce( function (acc, currval) {
    console.log(`acc : ${acc} and currval : ${currval}`)
    return acc + currval 
}, 0 )

myTotal = myNums.reduce( (acc,curr) => acc+curr, 0 )

console.log(myTotal)

console.log()
let shoppingCart = [
    {
        itemName: "js course",
        price : 999
    },
    {
       itemName: "mobile dev",
        price : 5999
    },
    {
       itemName: "data science",
        price : 12999 
    }
]

let pricetopay = shoppingCart.reduce( (acc,item) => acc + item.price,0 )
console.log(pricetopay)