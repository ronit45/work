import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
        //value , function -- which controls value
  const [counter, setCounter] = useState(15) // functions variables objects

  //let counter = 15
  const addvalue = () => {
    //counter++
    setCounter(counter + 1)
  }

  const removeValue = () => {
    setCounter(counter - 1)
  }
  return (
    <>
      <h1>Chai aur react</h1>
      <h2>Counter value : {counter}</h2>
      <button
      onClick={addvalue} >
        Add value {counter}</button>
      <br />
      <button
      onClick={removeValue}>remove value {counter}</button>
      <p>footer : {counter}</p>
    </>
  )
}

export default App
