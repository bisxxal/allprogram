import { FormEvent, useReducer, useState } from "react" 
import { useDispatch, useSelector } from "react-redux"
import { StateType, incrementByValue ,increment,decrement } from "./redux/redux"
// interface Person{
//   name:string,
//   age?:number
// }
// type StateType = {
//   count:number
// } 
// type ActionType  = {type:"increment" ,payload:number}| {type:"decrement" ,payload:number}


// const reducer = (state:StateType , action:ActionType ):StateType=>{

//   switch(action.type){
//     case "increment":
//       return {count:state.count + action.payload}
//       break;
//     case "decrement":
//       return {count:state.count -action.payload }
//       break;

//     default :
//     return state

//   }
//   }
//   const initialState:StateType ={
//     count:0
//   }
 
function App() { 
  // const [val ,setVal] = useState<Person>()
  
  // const onsumbitHandeler = (e:FormEvent<HTMLFormElement>)=>{
  //   e.preventDefault()
  //   console.log(val);
    
  // }

// usereducer
  // const [state , dispatch] = useReducer(reducer,initialState)

  // const increment  =():void=>{
  //   dispatch({
  //     type:"increment",
  //     payload:1
  //   })
  // }
  // const decrement  =():void=>{
  //   dispatch({
  //     type:"decrement",
  //     payload:1
  //   })
  // }

  ///---------------- redux
  const [val , setVal] = useState<number>(10)
  const dispatch  = useDispatch()
  const count = useSelector((store:StateType)=> store.count)
  const incrementv  =()=>{
    dispatch(increment())
  }
  const decrementv  =()=>{
  }
  dispatch(decrement())

  const decrementb  =():void=>{
    dispatch(incrementByValue(val))
  }

  return (
  <div>
     {/* <Hero  label="search" value={val} setter={setVal} > *</Hero> */}
    
    {/* <form onSubmit={onsumbitHandeler} className=" flex flex-col gap-5 w-1/3" >
    <input value={val?.age || ""}  onChange={(e)=> setVal( (prev)=> ( {...prev! , age:Number(e.target.value)} ))} type="number" />
    <input value={val?.name || ""} onChange={(e)=> setVal( (prev)=> ( {...prev! , name:e.target.value} ))} type="text" />
    <button type="submit">Submit</button>
    </form> */} 

    {/* //reducer */}

    <p>Count:{count}</p>
    <button className=" px-5 bg-zinc-600" onClick={incrementv} >+</button>
    <button className=" px-5 bg-zinc-600" onClick={decrementv} >-</button>
    <input type="number" onChange={(e)=>setVal(Number(e.target.value))} />
    <button className=" px-5 bg-zinc-600" value={val} onClick={decrementb} >Add</button>
  </div>
  )
}

export default App
