// singleton using Constructor
const tinderUser = new Object() // singleton Object
tinderUser.id = "123abc"
tinderUser.name = "Sammy"
tinderUser.isLogged = false

//console.log(tinderUser)

const regularUser = {
    email : "some@gmail.com",
    fullname : {
        userfullname : {
            firstname : "hitesh",
            lastname : "choudhary"
        }
    }
}
// console.log(regularUser.fullname.userfullname.firstname)

const obj1 = { 1 : "a" , 2 : "b"}
const obj2 = { 3 : "a" , 4 : "b"}

// const obj3 = {obj1, obj2}
// console.log(obj3) // { obj1: { '1': 'a', '2': 'b' }, obj2: { '3': 'a', '4': 'b' } }
let obj3 = Object.assign(obj1,obj2)

//  empty array is assigned key value of all other objects
// const obj3 = Object.assign({},obj1, obj2) 


//console.log(obj3)

//above out : { '1': 'a', '2': 'b', '3': 'a', '4': 'b' }
obj3 = {...obj1, ...obj2} // spreading all values

//console.log(obj3)

const users = [
    {
        id : 1,
        email : "h@gmail.com"
    },
    {
        id : 1,
        email : "h@gmail.com"
    },
    {
        id : 1,
        email : "h@gmail.com"
    }
]

console.log(users[1].email)
console.log(tinderUser)
// this converts keys or values of Object into array
console.log(Object.keys(tinderUser)) // output value is array
console.log(Object.values(tinderUser))
console.log(Object.entries(tinderUser)) // output map<int,int> like array (pair{key,value} )
// out [ [ 'id', '123abc' ], [ 'name', 'Sammy' ], [ 'isLogged', false ] ]  

console.log(tinderUser.hasOwnProperty('isLogged'))
// return true

