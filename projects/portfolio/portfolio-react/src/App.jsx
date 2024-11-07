import "./App.css";
import Navbar from "./components/Navbar"; 
import Moveing from "./components/Moveing"; 
import Skil from "./components/Skil";
import Follow from "./components/Follow";
import Projects from "./components/Projects";
import Fotter from "./components/Fotter"; 
import Loader from "./components/Loader";
import gsap from "gsap"; 
import { useEffect } from "react";
import HeroNext from "./components/HeroNext";
import cs from './assets/cs.png' 
import Lenis from 'lenis'
import 'lenis/dist/lenis.css'
import AboutSection from "./components/AboutSection";
import MenuCard from "./components/MenuCard";
function App() { 
  const lenis = new Lenis()
 
  function raf(time) {
    lenis.raf(time)
    requestAnimationFrame(raf)
  }
  
  requestAnimationFrame(raf)
  useEffect(() => {
    const handleMouseMove = (dets) => {
      gsap.to(".cursor", {
        x: dets.clientX + "px",
        y: dets.clientY + "px",
        delay: -2,
        opacity: 1,
      });
    };

    const handleMouseEnter = () => {
      gsap.to(".cursor", {
        scale: 1,
        opacity: 1,
      });
    };

    const handleMouseLeave = () => {
      gsap.to(".cursor", {
        scale: 0,
        opacity: 0,
      });
    };

    document.addEventListener("mousemove", handleMouseMove);
    document.addEventListener("mouseenter", handleMouseEnter);
    document.addEventListener("mouseleave", handleMouseLeave);

    return () => {
      document.removeEventListener("mousemove", handleMouseMove);
      document.removeEventListener("mouseenter", handleMouseEnter);
      document.removeEventListener("mouseleave", handleMouseLeave);
    };
  }, []);

  return (
    <> 
       <Loader /> 
      <div  className=" relative   bg-[#1e222d bg-[#121925]   text-white  z-[20]">
        <div className="cursor max-lg:hidden fixed   z-[1000] top-0 left-0 rounded-full pointer-events-none opacity-0  ">
          <img className="w-10 rotate-12" src='/cursor.png' alt="" />
      
        </div>
        <Navbar />  
        <HeroNext/>
        <Moveing />
        <AboutSection /> 
        <Follow />
        <Skil />
        <Projects />
        <Fotter />
        
        
        
        </div>

      <MenuCard/>
    </>
  );
}

export default App;
