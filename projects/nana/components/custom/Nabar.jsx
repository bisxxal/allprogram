import Image from "next/image";
import React from "react";

function Nabar() {
  return (
    <div className="flex justify-between items-center px-10 fixed top-0 left-0 z-10 w-full h-[68px] backdrop-blur-md bg-[#00000052] overflow-hidden ">
      <div className=" pb-1">
        <Image className=" w-20 h-20  " src="/logo.webp" height={500} width={500} alt="food"/>
      </div>

      <div className=" text-[#fc791a] text-4xl ">
        <h1> <span className=" font-bold text-[#ffaa21] ">Nana</span> handisala</h1>
      </div>
    </div>
  );
}

export default Nabar;
