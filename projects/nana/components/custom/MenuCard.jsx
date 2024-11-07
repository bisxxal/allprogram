"use client";
import React, { useEffect, useRef } from "react";
import { useGSAP } from "@gsap/react";
import gsap from "gsap";
import { ScrollTrigger } from "gsap/ScrollTrigger";

gsap.registerPlugin(ScrollTrigger);
function MenuCard() {
  const ref = useRef(null);

  useGSAP(() => {
    gsap.from(".con", {
      y: -40,
      // delay: 10, // Long delay before the animation starts
      duration: 30, // Slow animation duration for smoothness
      stagger: 3, // Stagger each element for slow transitions between them
      opacity:0,
      scrollTrigger: {
        trigger: ".skils",
        start: "top 80%", // Adjust start and end as needed
        end: "top 30%",
        markers: true,
        scrub: 2, // Slows the animation tied to scroll for smoother effect
      },
    });
  });
 
  
  return (
    <div  ref={ref} className=" skils mt-10 w-full py-10 h-screen bg-green-30">
      <h1 className="  text-zinc-400 text-4xl px-10 mb-10 font-bold ">
        Our Menu
      </h1>

      <div className="  w-fit justify-center mx-auto flex gap-6 flex-wrap">
       
       {/* cards */}
        <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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







        <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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
        </div>   <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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
        </div>   <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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
        </div>   <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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
        </div>   <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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
        </div>   <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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
        </div>   <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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
        </div>   <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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
        </div>   <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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
        </div>   <div className=" con w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow ">
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

// "use client";
// import React, { useEffect, useRef } from "react";
// import { useGSAP } from "@gsap/react";
// import gsap from "gsap";
// import { ScrollTrigger } from "gsap/ScrollTrigger";

// gsap.registerPlugin(ScrollTrigger);

// const menuItems = [
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   {
//     name: "Chicken Biryani",
//     price: 120,
//     image: "https://healux.in/wp-content/uploads/2020/11/ChickenBiryani.jpg",
//   },
//   // Add more items as needed
// ];
// function MenuCard() {
//     const ref = useRef(null);

//     useEffect(() => {
//         const items = gsap.utils.toArray('.con>div'); // Select all items

//       gsap.from(items, {
//         y: 100,
//         duration: 0.5,
//         stagger: 0.2,
//         scrollTrigger: {
//           trigger: ref.current,
//           start: "top 75%", // Adjusted start position
//           end: "top 50%",
//           scrub: 1,
//           once: true, // Animation will happen only once when it enters the viewport
//         },
//       });

//       // Cleanup function to kill ScrollTrigger on unmount
//       return () => {
//         ScrollTrigger.getAll().forEach(trigger => trigger.kill());
//       };
//     }, []);

//     return (
//       <div ref={ref} className="mt-10 skils w-full py-10 h-screen bg-green-30">
//         <h1 className="text-zinc-400 text-4xl px-10 mb-10 font-bold">Our Menu</h1>
//         <div className="w-fit con justify-center mx-auto flex gap-5 flex-wrap">
//           {menuItems.map((item, index) => (
//             <div
//               key={index}
//               className=" w-[220px] h-[280px] rounded-xl overflow-hidden hover:scale-[1.03] transition-all inshadow"
//             >
//               <div className="w-full h-[150px]">
//                 <img
//                   className="w-full h-full object-cover"
//                   src={item.image}
//                   alt={item.name}
//                 />
//               </div>
//               <div className="frame h-[130px] w-full flex flex-col pt-5 px-3 mt-1">
//                 <h1 className="text-xl font-bold">{item.name}</h1>
//                 <p className="text-sm">Price: {item.price}</p>
//               </div>
//             </div>
//           ))}
//         </div>
//       </div>
//     );
//   }

//   export default MenuCard;
