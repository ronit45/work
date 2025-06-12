import React, { useState } from "react";
import {useDispatch} from 'react-redux'
import { addTodo } from "../features/todo/todoSlice";


function AddTodo(){
    const [input,setInput] = useState('')
    const dispatch = useDispatch()

    const addTodoHandler = (e) => {
        e.preventDefault()
        dispatch(addTodo(input))
        setInput('')
    }
    return(
        <form onSubmit={addTodoHandler}>
            <input
                type="text"
                placeholder="Write Todo..."
                value={input}
                onChange={(e) => setInput(e.target.value)}
            />
            <button type="submit" className="rounded-r-lg px-3 py-1 bg-green-600 text-white shrink-0">
                Add
            </button>
        </form>
    )
}

export default AddTodo