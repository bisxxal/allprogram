 
import React, { useEffect, useRef } from "react";
import { useGSAP } from "@gsap/react";
import gsap from "gsap";
import { ScrollTrigger } from "gsap/ScrollTrigger";

gsap.registerPlugin(ScrollTrigger);
function MenuCard() {
  const ref = useRef(null);


  useGSAP(() => {
    gsap.from(".con", {
      y: -100,
      delay: 10, // Long delay before the animation starts
      duration: 20, // Slow animation duration for smoothness
      stagger: 5, // Stagger each element for slow transitions between them
      opacity:0,
      scrollTrigger: {
        trigger: ".skils",
       
        scrub: 2, // Slows the animation tied to scroll for smoother effect
      },
    });
  });
  
   
  return (
    <div ref={ref} className=" skils mt-10 w-full py-10 h-screen bg-green-30">
      <h1 className="  text-zinc-400 text-4xl px-10 mb-10 font-bold ">
        Our Menu
      </h1>

      <div className="  w-fit justify-center mx-auto flex gap-5 flex-wrap">
       
       {/* cards */}
        <div className=" con opacit w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
          <div className=" w-full h-[150px]">
            <img
              className=" w-full h-full object-cover"
              src="https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg"
              alt="food"
            />
          </div>
          <div className="frame h-[130px] w-full flex flex-col pt-5 px-3 mt-1">
            <h1 className=" text-xl font-bold">Chicken Biryani</h1>
            <p className=" text-sm">Price: 120</p>
          </div>
        </div>
        <div className=" con opacit w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
          <div className=" w-full h-[150px]">
            <img
              className=" w-full h-full object-cover"
              src="https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg"
              alt="food"
            />
          </div>
          <div className="frame h-[130px] w-full flex flex-col pt-5 px-3 mt-1">
            <h1 className=" text-xl font-bold">Chicken Biryani</h1>
            <p className=" text-sm">Price: 120</p>
          </div>
        </div>
        <div className=" con opacit w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
          <div className=" w-full h-[150px]">
            <img
              className=" w-full h-full object-cover"
              src="https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg"
              alt="food"
            />
          </div>
          <div className="frame h-[130px] w-full flex flex-col pt-5 px-3 mt-1">
            <h1 className=" text-xl font-bold">Chicken Biryani</h1>
            <p className=" text-sm">Price: 120</p>
          </div>
        </div>
        <div className=" con opacit w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
          <div className=" w-full h-[150px]">
            <img
              className=" w-full h-full object-cover"
              src="https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg"
              alt="food"
            />
          </div>
          <div className="frame h-[130px] w-full flex flex-col pt-5 px-3 mt-1">
            <h1 className=" text-xl font-bold">Chicken Biryani</h1>
            <p className=" text-sm">Price: 120</p>
          </div>
        </div>
        <div className=" con opacit w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
          <div className=" w-full h-[150px]">
            <img
              className=" w-full h-full object-cover"
              src="https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg"
              alt="food"
            />
          </div>
          <div className="frame h-[130px] w-full flex flex-col pt-5 px-3 mt-1">
            <h1 className=" text-xl font-bold">Chicken Biryani</h1>
            <p className=" text-sm">Price: 120</p>
          </div>
        </div>
        <div className=" con opacit w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
          <div className=" w-full h-[150px]">
            <img
              className=" w-full h-full object-cover"
              src="https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg"
              alt="food"
            />
          </div>
          <div className="frame h-[130px] w-full flex flex-col pt-5 px-3 mt-1">
            <h1 className=" text-xl font-bold">Chicken Biryani</h1>
            <p className=" text-sm">Price: 120</p>
          </div>
        </div>
        <div className=" con opacit w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
          <div className=" w-full h-[150px]">
            <img
              className=" w-full h-full object-cover"
              src="https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg"
              alt="food"
            />
          </div>
          <div className="frame h-[130px] w-full flex flex-col pt-5 px-3 mt-1">
            <h1 className=" text-xl font-bold">Chicken Biryani</h1>
            <p className=" text-sm">Price: 120</p>
          </div>
        </div>

 
 



      </div>
    </div>
  );
}

export default MenuCard;
