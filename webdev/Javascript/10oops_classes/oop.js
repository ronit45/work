const user = {
    username: "hitesh",
    loginCount: 8,
    signedIn : true,

    getUserDetail : function(){
        //console.log("Got user details from database")
        //console.log(this.username)
        //console.log(this)
    }
}
// console.log(user.username)
// console.log(user.getUserDetail())
// console.log(this)

function User(username, loginCount, isLoggedIn){
    this.username = username
    this.loginCount = loginCount
    this.isLoggedIn = isLoggedIn

    this.greeting = function(){
        console.log(`Welcome ${this.username}`)
    }
    // return this; it is by default
}

// new keyword creates new object 
// constructor function is called due to new
// this keyword injects values

const userOne = new User("hitesh", 12, true)
const userTwo = new User("chaiaurcode", 11, false)
console.log(userOne.constructor) // [Function: User]
// console.log(userTwo)