'use client'
import FoodPrice from "@/components/custom/FoodPrice";
import Hero from "@/components/custom/Hero"; 
import MenuCard from "@/components/custom/MenuCard";
import Nabar from "@/components/custom/Nabar"; 
export default function Home() {
 
  return (
    <>
    <Nabar />
   <main className=" pt-[70px] px-5">
  <Hero />
   <MenuCard /> 
    <FoodPrice/>
   </main>
    </>
  );
}
