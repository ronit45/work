import React from "react";
import ProfileProvider from "./context/ProfileProvider";
import Home from "./components/Home";


const App = function(){
  return(
    <ProfileProvider>
      <Home/>
    </ProfileProvider>
  )
}
export default App