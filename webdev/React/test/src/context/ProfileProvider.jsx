import React, { createContext, useContext, useState } from 'react';

const Profile = createContext()

const ProfileProvider = ({children}) => {
    const [user,setUser] = useState("ronit")
    const [pass,setPass] = useState("pass")
    return (
        <Profile.Provider value={{user,pass}}>
            {children}
        </Profile.Provider>
    )
}
export const useProfile = () => useContext(Profile)
export default ProfileProvider