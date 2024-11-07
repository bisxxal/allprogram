import './style.css'

interface Todo{
    title:string,
    isCompleted:boolean,
    readonly id:string,
}

const todos : Todo[] = [];

const todoContainer = document.querySelector(".todocontainer") as HTMLDivElement

const todoInput = document.getElementsByName('title')[0] as HTMLInputElement;

const myForm = document.getElementById('myForm') as HTMLFormElement;
 
myForm.onsubmit = (e: SubmitEvent)=>{
    e.preventDefault()

    const todo:Todo={
      title:todoInput.value,
      isCompleted:false,
      id:String(Math.floor(Math.random()*1000))
    }

    todos.push(todo)
    todoInput.value='' 
    renderTodo(todos)
}

const generateTodoItem = (title:string , isCompleted:boolean , id:string  )=>{
   const todo:HTMLDivElement = document.createElement('div');

   todo.className = "todo"

   const checkBox : HTMLInputElement = document.createElement('input')
   checkBox.setAttribute("type" , "checkbox")
   checkBox.className = 'isCompleted'
   checkBox.checked = isCompleted

   const para:HTMLParagraphElement = document.createElement('p')

   checkBox.onchange = ()=>
    {
        todos.find((item)=>{
            if(item.id === id) item.isCompleted = checkBox.checked
        })
        para.className = checkBox.checked ? "isdel":''
    }
    
    para.innerText = title
    para.className = isCompleted ? "isdel":''
   const btn:HTMLButtonElement = document.createElement('button')
btn.innerText="X";
btn.className='deletebtn'



btn.addEventListener('click',()=>{
     const idx = todos.findIndex((item)=>item.id === id);
     todos.splice(idx, 1)
     renderTodo(todos)
})

todo.append(checkBox , para , btn)
todoContainer.append(todo)
}
const renderTodo = (todos:Todo[])=>{

    todoContainer.innerHTML= ''
    todos.forEach((item)=>{
        console.log();
        
        generateTodoItem(item.title ,item.isCompleted, item.id )
    })

}