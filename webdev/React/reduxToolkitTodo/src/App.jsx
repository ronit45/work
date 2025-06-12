import { useState } from 'react'

import AddTodo from './components/AddTodo'
import Todos from './components/Todos'

function App() {

  return (
    <>
    <div className=''>
      <h1 className=''>Learn About Redux Toolkit</h1>
      <AddTodo/>
      <Todos/>
      </div>
    </>
  )
}

export default App
