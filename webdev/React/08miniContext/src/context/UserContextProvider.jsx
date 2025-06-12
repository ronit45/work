import React from 'react'
import UserContext from "./UserContext"
import { useState } from 'react'

// children name can be changed
const UserContextProvider = ({children}) => {
    const [user,setUser] = useState(null) // do api calls here
    // send these value = {{user, setUser, etc}}
    const userData = useContext(UserContext);
    console.log("UserContext value:", userData);
    return (
        <UserContext.Provider value={{user,setUser}}> 
        {children}
        </UserContext.Provider>
    )
}

export default UserContextProvider 