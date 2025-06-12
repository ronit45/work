class User{
    constructor(email,password){
        this.email = email
        this.password = password
    }
    get email(){
        return this._email.toUpperCase()
    }
    set email(value){
        this._email = value
    }

    get password(){
        return this._password.toUpperCase()
    }
    set password(value){
        this._password = value
    }
}

const hitesh = new User("hitesh@ai.com", "abc")
console.log(hitesh.password)
console.log(hitesh.email)



// using properties get set
function chai(email,password){
    this._email = email
    this._password = password 
    
    Object.defineProperty(this, 'email' ,{
        get : function(){
            return this._email.toUpperCase()
        },
        set: function(value){
            this._email = value
        }
    })
}

const masalachai = new chai("chai@chai.com", "chai")
console.log(masalachai.email)

