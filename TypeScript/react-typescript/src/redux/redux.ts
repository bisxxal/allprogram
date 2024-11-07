import { PayloadAction, configureStore, createSlice } from "@reduxjs/toolkit";
 

export interface StateType{
    count:number
}
 const initialState :StateType = {
    count:0
}

const roteSlice  = createSlice({
    name:'counter',
    initialState,
    reducers:{
        increment:(state)=>{
            state.count +=1;
        },
        decrement:(state)=>{
            state.count -= 1;
        },
        incrementByValue:(state , action:PayloadAction<number>)=>{
            state.count += action.payload
        }
    }
});
export const {increment , decrement, incrementByValue} = roteSlice.actions;

export const store = configureStore ({reducer:roteSlice.reducer})