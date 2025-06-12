import { useState,useCallback , useEffect, useRef } from 'react'
import './App.css'
function App() {
  const [length,setLength] = useState(8)
  const [number,setNumber] = useState(false)
  const [char, setChar] = useState(false)
  const [password,setPassword] = useState("")

  // useRef hook
  const passwordRef = useRef(null)


  const passwordGenerator = useCallback(function(){
    let pass = ""
    let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"

    if(number) str += "0123456789"
    if(char) str += "~!@#$%^&*()?><]["
    for(let i= 1; i<= length; i++){
      let rand = Math.floor(Math.random() *str.length + 1)
      pass += str.charAt(rand)
    }
    setPassword(pass)

  } , [length,number,char,setPassword])

  const copyPasswordToClipboard = useCallback(()=> {
    passwordRef.current?.select()
    //passwordRef.current?.setSelectionRange(0,3)
    navigator.clipboard.writeText(password).then(
      function(){ alert('Password copied to clipboard')}
    )
  },
  [password])

  useEffect( () => {passwordGenerator()}
    , [length, number, char, passwordGenerator] )

  return (
    <>
<div className='w-full max-w-md mx-auto shadow-md 
  rounded-lg px-4 my-8 text-white bg-gray-800 text-center'>
  
  <h1 className='text-white text-center text-2xl py-4'>
    Password Generator
  </h1>

  <div className='flex my-4'>
    <input
      type='text'
      value={password}
      className='w-full p-2 my-3 rounded bg-gray-700 text-white placeholder-white '
      placeholder='password'
      readOnly
      ref={passwordRef}
      />


      <button
      onClick={copyPasswordToClipboard}
      className='outline-none bg-blue-700
      text-white px-3 my-3 shrink-0'>copy</button>

  </div>

  <div className='flex text-sm gap-x-2'>
    <div className='flex items-center gap-x-1'>
      <input
        type= "range"
        min={6}
        max={100}
        value= {length}
        className='cursor-pointer'
        onChange={ (e) => {setLength(e.target.value)} }

      /><label> length : {length}</label>

    </div>

    <div className='flex items-center gap-x-1'>
      <input
        type="checkbox"
        defaultChecked={number}
        id="numberInput"
        onChange={ () => {
            setNumber( (prev) => !prev )
        } }
      />
      <label htmlFor="numberInput">Numbers</label>
    </div>

    <div>
    <input
        type="checkbox"
        defaultChecked={char}
        id="charInput"
        onChange={ () => {
            setChar( (prev) => !prev )
        } }
      />
      <label htmlFor="numberInput">Characters</label>
    </div>


  </div>
</div>
    
    </>
  )
}

export default App
