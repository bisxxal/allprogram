"use strict";
// interface Obj{
//     height:number,
//     width:number,
//     gender?:boolean,
// }
// interface Product{
//     name:string , stock:number,price:number  , photo:string
//     readonly id:string
// }
// interface helo extends Product{
//     _id:number
// }
// type getDatatype = ( product:{
//     name:string , stock:number,price:number  , photo:string   
// })=>void
// const getdata: getDatatype = (product)=>{
//     console.log(product);
// }
// const productOne: Product={
//     name:'string' , stock:34,price:756432  , photo:'photo.url',id:'DFV'
// }
// getdata(productOne)
//Interface with class 
// interface ProductType{
//     name:string;
//     price:number;
//     stock:number; 
//     offer?:boolean;
// }
// interface GiveId{
//     getId :()=> string;
// }
// class Product implements ProductType ,GiveId {
//     private id: string = String(Math.random()*1000);
//     constructor(public  name: string ,public  price: number ,public stock: number){
//     }
//     getId = () => this.id
// }
// const Product1 = new Product ( "mac" , 30000 , 32);
// console.log(Product1.getId());
// ===========================  type assocation in typescript ===============================
//  const a = <HTMLElement> document.querySelector('.btn')
//  const a = document.querySelector('.btn') as HTMLElement
//  const a = document.querySelector('.btn')!
// const img = document.querySelector('img')!
// img.src='google.png'
// typescript utility
// 1.Partial<Type>
// 2.Required<Type>
// 3.Readonly<Type>
// 4.Record<key , Type>
// 5.Pick<key , Type>
// 6.Omit<key , Type>
// 7.Exclude<key , Type>
// 8.Extract<key , Type>
// 9.NonNullable<Type>
// 10.Parameters<Type>
// 11.ConstructorParameter<Type>
// 11.ReturnType<Type>
// 11.InstanceType<Type>
// 1.Partial<Type>
// type User = {
//     name:string,
//     email:string,
// }
// type User2= Partial<User>
// 1.Required<Type>            // opposite of partial
// type Usrr = {
//     name?:string,
//     email:string,
// }
// type User2= Required<User>
// 3.Readonly<Type>
// type User = {
//     name:string,
//     email:string,
// }
// const user2 : Readonly<User> = {
//     name:"abhi",
//     email:'sjhcvd'
// }
// user2.name  = 'fkjfv' //cannot change because it is readONly
// 4.Reacoed<keys8d , Type>
// type User = {
//     name:string,
//     email:string,
// }
// const user2 : Readonly<User> = {
//     name:"abhi",
//     email:'sjhcvd'
// }
// user2.name  = 'fkjfv' //cannot change because it is readoONly
// 5.Pick<key , Type>
// interface OrderInfo{
//     readonly id:string,
//     user:string,
//     city:string,
//     country:string,
//     status:string
// }
// type ShippingInfo = Pick <OrderInfo,"city"|"country"|"status">;
// 6.Omit<key , Type>
// interface OrderInfo{
//     readonly id:string,
//     user:string,
//     city:string,
//     country:string,
//     status:string
// }
// type ShippingInfo = Omit <OrderInfo,"city"|"country"|"status">;
// 7.Exclude<key , Type>
// type MyUnion = string |number |boolean
// type Random = Exclude<MyUnion , boolean> // exclude all passed values opposite extract
// 8.Extract<key , Type>
// type MyUnion = string |number |boolean
// type Random = Extract<MyUnion , boolean> // extract all passed values opposite of exclude
// 9.NonNullable<Type>
// type MyUnion = string |number |boolean|null|undefined
// type Random = NonNullable<MyUnion> // remove all null able values
// 10.Parameters<Type>
// const myFun = (a:number ,b:string)=>{
// console.log(a+b);
// }
// type Random = Parameters<typeof myFun>  // return array of parameter
// 11.ConstructorParameter<Type>
// class Sample{
//     constructor (s:string , t:string){}
// }
// type Random = ConstructorParameters<typeof Sample>  // return array  ConstructorParameter
// 11.ReturnType<Type>
// const myFun = (a:number ,b:string):string=>{
//    return a+b
// }
// type Random = ReturnType<typeof myFun>  // the return type
// 11.InstanceType<Type>
// class Sample{
//     constructor (s:string , t:string) {}
// }
// type Random = InstanceType<typeof Sample>   
// const user : Random={
//     s:'34',
//     t:'re'
// }
// --------------------------------- Generics ---------------------------------
// const func = <T>( a:T):T=>{
//     return a
// }
// const  ans = func(23)
// const  ans2 = func("sdf")
// const  ans3 = func(true)
// type name = {
//   name:string,
//   age:number
// }
// const func = <T>( a:T):T=>{
//     console.log(a);
//     return a
// }
// const bisx:name={
//     name:"busx",
//     age:34
// }
// const  ans = func(bisx)
// console.log(ans.name);
const func = (a, o) => {
    console.log(a);
    return { a, o };
};
const ans = func(23, 'sf');
ans.o;
