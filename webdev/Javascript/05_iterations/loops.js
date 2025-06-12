// const arr = [1,2,3,4,5]
// for(const num of arr){
//     console.log(num)
// }

// let greetings = "Hello World !"
// for(const greet of greetings){
//     console.log(`Each char is ${greet}`)
// }

// -------------- Maps --------------

const map = new Map()
map.set('IN',"India")
map.set('USA', "United States of America")
map.set('Fr', "France")

map.set('IN',"India") // does not add duplicate

//console.log(map)


// ------------ for of loop -----------
for(const [key,value] of map){
    console.log(key, ': -', value)
}

// cannot work
// for (const key in map){
//     console.log(key)
// }

const myObject = {
    'game1' : 'NFS',
    'game2' : 'Spiderman'
}

// cannot iterate over object
// there are other methods
// for(const [key,value] of myObject){
//     console.log(key, value)
// }

// ---------- For in loop ---------------

// for(const key in myObject){
//     console.log(myObject[key])
// }

// key value pair
for(const key in myObject){
    console.log(`${key} - ${myObject[key]}`)
}

// ------------- for each loop------------

const coding = ["js", "ruby", "java", "python"]


    // coding.forEach( function (item) {
    //     console.log(item)
    // } )

    // coding.forEach( (item) => {
    //     console.log(item)
    // } )

    // function printMe(item){
    //     console.log(item)
    // }

    // coding.forEach(printMe)

coding.forEach( (item, index, arr)=> {
    console.log(item, index, arr);
} )

const myCoding = [
    {
        languageName : "java",
        filename : "java"
    },
    {
        languageName: "python",
        filename : "py"
    },
    {
        languageName: "javascript",
        filename : "js"
    }
]

myCoding.forEach( (item) => {
    console.log(item.languageName)
} )

console.log()
console.log("---- FILTER ----")

// ------------ Filter ------------

const myNums = [1,2,3,4,5,6,7,8,9,10]

let ans = myNums.filter( (num) => num > 4 )
console.log(ans)
ans = myNums.filter( (num) => {
    return num > 4
} )

console.log(ans)

const books = [
    { title: 'Book One', genre: 'Fiction', publish: 1981, edition: 2004 },
    { title: 'Book Two', genre: 'Non-Fiction', publish: 1992, edition: 2008 },
    { title: 'Book Three', genre: 'History', publish: 1999, edition: 2007 },
    { title: 'Book Four', genre: 'Non-Fiction', publish: 1989, edition: 2010 },
    { title: 'Book Five', genre: 'Science', publish: 2009, edition: 2014 },
    { title: 'Book Six', genre: 'Fiction', publish: 1987, edition: 2010 },
    { title: 'Book Seven', genre: 'History', publish: 1986, edition: 1996 },
    { title: 'Book Eight', genre: 'Science', publish: 2011, edition: 2016 },
    { title: 'Book Nine', genre: 'Non-Fiction', publish: 1981, edition: 1989 },
  ];

  // database
  let userBooks = books.filter( (bk) => bk.genre === 'History')
   userBooks = books.filter( (bk) => {return bk.publish >= 2000} )
   userBooks = books.filter( (bk) => { 
    return bk.publish >= 1999 && bk.genre == "History"
   } )
  console.log(userBooks)

