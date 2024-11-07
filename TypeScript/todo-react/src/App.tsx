import { useState } from 'react'   
import TodoItem from './TodoItem'

function App() {
  const [todos, setTodos] = useState<TodoItemType[]>([])

  return (
  <div className=' bg-zinc-900 min-h-screen w-full text-white'>
    
  {
    todos.map((index)=>(
      <TodoItem key={index.id} todo={index} />
    ))
  }
  </div>
  )
}

export default App