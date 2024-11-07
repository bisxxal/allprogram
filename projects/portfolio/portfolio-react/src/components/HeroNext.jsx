import React, { useEffect, useRef } from "react";
import "../App.css";
import VanillaTilt from "vanilla-tilt";
import img from "../assets/images";
import { useGSAP } from "@gsap/react";
import gsap from "gsap";
 
gsap.registerPlugin(useGSAP);
function HeroNext() {
  const element = useRef();
  const container = useRef();

  useEffect(() => {
    const elements = document.querySelectorAll(".tilt");
    VanillaTilt.init(elements, {
      max: 6,
      speed: 1000,
      perspective: 1000,
      "max-glare": 0.5,
      easing: "cubic-bezier(.03,.98,.52,.99)",
    });

    return () => {
      elements.forEach((element) => {
        if (element.vanillaTilt) {
          element.vanillaTilt.destroy();
        }
      });
    };
  }, []);

  useGSAP(
    () => {
      var t1 = gsap.timeline();
      t1.from(".icon , .gd ", {
        filter: "blur(15px)",
        opacity: 0,
        duration: 0.5,
        delay: 3.8,
      });
      t1.from(".leftside div  h1 ", {
        y: 1000,
        opacity: 0,
        duration: 2,
        delay: -1,

        stagger: 0.5,
      });

      t1.from(".sit img", {
        delay: -1,
        y: 200,
        duration: 1.5,

        opacity: 0,
      });

      t1.from(".bgimg", {
        delay: -1.2,
        x: 1000,

        y: -200,
        duration: 1.5,
        opacity: 0,
      });
    },
    { scope: container }
  );
  return (
    <>
      <div
        ref={container}
        className="mainfont overflow-hidden pt-5 lg:pt-0 w-full max-md:h-[80vh] h-screen bg-[#000319 bg-[#080312] flex lg:flex-row flex-col justify-center items-center relative rounded-xl lg:rounded-b-3xl  "
      >
        <div className=" sit flex items-end justify-center sitgrd h-[310px] max-md:h max-lg:h-1/2 w-full bottom-[-0px]  absolute">
          <img className=" w-1/4 object-cover h-[80%]" src={img.stand} alt="" />
          <img className=" w-1/3 h-[80%] object-cover" src={img.stand} alt="" />
          <img className=" w-1/3 h-[80%] object-cover" src={img.stand} alt="" />
          <img className=" w-1/3 h-[80%] object-cover" src={img.stand} alt="" />
        </div>

        <div className="gd absolute max-lg:left-[20%] left-[45%] bg-[#2d53bc56] h-60  max-lg:h-52 max-lg:w-[200px] w-[350px] rounded-full blur-[100px] max-lg:blur-[70px]"></div>
        <div className="gd absolute -right-[10%] bg-[#2d53bc83] h-[400px]  max-lg:-top-10 -top-32 max-lg:h-52 max-lg:w-[200px] w-[400px] rounded-full blur-[200px blur-[100px] "></div>
        <div className="gd absolute max-lg:left-[35%] left-[33%] bg-[#ff04c93b] h-60 max-lg:h-52  max-lg:w-[200px] w-[350px] rounded-full blur-[100px]  "></div>

        <button className="z-30 absolute bottom-10 lbtn left-[45%] max-md:left-1/3 backdrop-blur-[3px bg-[#ffffff1a px-5 py-2 border-white border rounded-full ">
          Dowload cv -&gt;
          <div class="hoverEffect">
            <div></div>
          </div>
        </button>
        <img
          className=" icon absolute w-32 left-0 top-20 max-lg:w-24 "
          src={img.icon1}
          alt=""
        />
        <img
          className=" icon absolute w-16 left-32 max-lg:left-3 max-lg:w-14 bottom-20 z-20 "
          src={img.icon2}
          alt=""
        />
        <img
          className=" icon absolute w-28 max-md:right-[1%] max-lg:w-24 right-[10%] max-lg:top-[20%] top-[40%] "
          src={img.icon4}
          alt=""
        />
        <img
          className=" icon absolute w-[125px] right-[15%] max-lg:w-24 max-md:right-[1%] max-md:bottom-10 bottom-[10%] z-20 "
          src={img.icon3}
          alt=""
        />

        <div
          ref={element}
          className=" d-pointer relative flex items-center w-full h-[90%] bg-zinc-5 justify-center tilt "
          data-tilt
          data-tilt-max="50"
          data-tilt-speed="1000"
          data-tilt-perspective="500"
        >
          <div className=" font-bold text-[#ffffffc1] flex flex-col justify-center items-center  max-[328px]:text-lg  max-md:text-[60px]  text-[11.5vw] leftside absolute max-lg:top-[25%] z-20 ">
            <div className="  overflow-hidden">
              <h1>Heyy <span className=" animate-gradient tracking-[0.3px]  ">!!</span> I am <span className=" animate-gradient ">Bishal</span> 
              </h1> 
            </div>
            <div className=" overflow-hidden">
              <h1 className=" drop-shadow-xl tracking-[0.3px]  ">Full Stack - web devloper 
              </h1> 
            </div>
          </div>

          <div className="bgimg tilt-child w-[550px]">
            <img className="mainimg object-cover  " src={img.rm} alt="" />
          </div>
        </div>
      </div>
    </>
  );
}

export default HeroNext;
