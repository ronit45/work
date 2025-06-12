// singleton made using only constructor and not literals
// Object.create (constructor)
// object literals

const sym = Symbol("key1")
const jsUser = {
    name : "hitesh",
    "full name" : "hitesh choudhary",
    // use square bracket to use sym as Symbol
    // otherwise it is used normally as String
    [sym] : "mykey1",
    age : 18,
    location : "jaipur",
    email : "hites@google.com",
    isLoggedin : false,
    lastLoginDays : ["monday", "saturday"]
}


console.log(jsUser.email)
console.log(jsUser["email"])
console.log(jsUser["full name"]) // full name cannot be 
// used with as (jsUser.full name)

console.log(jsUser[sym])

// change values
jsUser.email = "hitesh@gmail.com"
// cannot change any values of Object
// Object.freeze(jsUser)

jsUser.greeting = function(){
    console.log(`hello js user, ${this.name}`)
}
console.log(jsUser.greeting()) // function ka
//  reference only greeting not greeting()