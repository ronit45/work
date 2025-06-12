import React from "react";
import {useProfile} from "../context/ProfileProvider";
import { useContext } from "react";
const Home = function(){
    const {user} = useProfile()
    return(
        <div>{user}</div>
    )
}
export default Home