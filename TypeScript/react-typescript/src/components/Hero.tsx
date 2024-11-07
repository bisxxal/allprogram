import { Dispatch, SetStateAction } from "react";

 
type InputValType = string|number;

function Hero <T ,>({label,value,setter}
  :{label:string , value:string,setter:()=> Dispatch<SetStateAction<string>>}) {
 
  return (
    <div >
        <form >
            <label >{label}</label>
            <input type="text" value={value} onChange={(e)=>setter(e.target.value as string)}  />
            <button type="submit">Submit</button>
        </form> 
    </div>
  )
}

export default Hero