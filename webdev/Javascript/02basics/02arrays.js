const marvel = ["thor" ," ironman" , "spiderman"]
const dc = ["superman" , "batman" , "flash"]
//marvel.push(dc)
// console.log(marvel)
// console.log(marvel[3][1])

const allHeros = marvel.concat(dc) // returns join of two or more arrays
console.log(allHeros)

const all_new_heros = [...marvel, ...dc] // spreads
console.log(all_new_heros) 

const arrTwo = [1,2,3, [4,5,6] ,7, [6,7,[4,5]]]
const realtwo = arrTwo.flat(Infinity)
console.log(realtwo)

console.log(Array.isArray("hitesh"))
console.log(Array.from("hitesh"))

// confuses to convert to array on which value (key or value)
console.log(Array.from({name : "hitesh"})) 

let score1 = 100
let score2 = 200
let score3 = 300

console.log(Array.of(score1, score2, score3))   
