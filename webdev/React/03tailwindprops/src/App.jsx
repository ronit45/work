import React from 'react'

import './App.css'
import Card from './components/Card'

let myObj = {
  username: "hitesh",
  age: 21
}

let newArr = [1,2,3]

function App() {

  return (
    <>
    <Card username="hitesh" btnText="add me"  />
    <Card username="ronit" btnText="click here" />
    </>
  )
}

export default App
