 
import React  from 'react';
import '../App.css';
import { FaGithub } from "react-icons/fa"; 
import gsap from 'gsap';
import { useGSAP } from '@gsap/react';

function Navbar() {
  useGSAP(() => { 

    const tl = gsap.timeline();

    tl.fromTo(".nav",
      { width: 0, left: '50%', x: '-50%' },   
      { width: '90%', left: '50%', x: '-50%', delay: 3.9 , duration: 1 }  
    )
    .from(".logo h2", {
      y: -100,
      opacity: 0,
      stagger: 0.1,
      filter: 'blur(9px)',
      duration: 0.7,
    }, "-=0.2")
    .from(".rnav", { 
      x: -30,
      opacity: 0,
      duration: 0.8,
      filter: 'blur(5px)',
    }, "-=1")
    ;
     
  }, []);
  
  return (
    <div className="nav h-[60px] w-0 top-5 flex fixed items-center px-4 max-lg:pl-4 pl-7 z-[90] rounded-full border-[2px] border-[#ffffff08]  bg-[#ffffff09]  backdrop-blur-lg justify-between">
      <div className="logo pr-1 max-lg:pt-2 max-[328px]:text-lg leading-none max-lg:text-[24px] flex items-center text-[34px] lowercase">
        <h2 className='animate-gradient'>B</h2><h2>I</h2><h2>S</h2><h2>H</h2><h2>A</h2><h2>L</h2><h2>.</h2> 
      </div> 
      <div className="rnav">
        <div className='bg-[#83AFEF] sad px-4 py-2 max-[328px]:text-xs max-[328px]:px-2 capitalize rounded-full'> 
          <a target='_blank' href='https://github.com/bisxxal'> 
            <h1 className='flex items-center gap-2'>Visit Repo <FaGithub className='text-lg'/></h1>
          </a>
        </div>
      </div>  
    </div>
  );
}

export default Navbar;
