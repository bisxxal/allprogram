import React, { useEffect } from 'react'
import gsap from 'gsap';
import { useGSAP } from '@gsap/react';
import { useRef } from 'react';
import SplitType from 'split-type';
import { ScrollTrigger } from "gsap/ScrollTrigger";
import img from '../assets/images';
gsap.registerPlugin(useGSAP);
gsap.registerPlugin(ScrollTrigger);

function About() {

  
    const container = useRef();
    const paragraphRef = useRef(null);
     
    useEffect(() => {
      const paragraph = paragraphRef.current;
      
      if (paragraph) {
        const text = new SplitType(paragraph, { types: 'chars' });
        gsap.from(text.chars, {
          color: '#515151', 
          x: 1,  
          duration: 8,
          filter: 'blur(0.9px)',
          scrollTrigger: {
            trigger: paragraph, 
            start: 'top bottom',  
            end: 'top top', 
            scrub:0.6,   
          },
          stagger: 0.6, 
        });
      }
    }, [paragraphRef]);
  return (
    <>
    <div ref={container} className="h-[80vh] w-full flex items-center flex-col aboutpart overflow-hidden">
          <div className="hellopart h-full  w-full relative flex flex-col items-center justify-center">
            <div className="gradient"></div>
            <img className='w-full h-full blur-sm object-cover brightness-[53%]' loading="lazy" src={img.whatsapp} alt=""/>
            <h1 className=' absolute max-md:top-[7%] top-[15%] text-[40px] font-bold  '>Hey there!! </h1>
            <div className="abouttextpart  lg:text-[24px] absolute z-[21] max-md:px-7 px-10 lg:px-24 text-xl lg:leading-[40px] leading-[30px] w-full  ">
              <p  ref={paragraphRef}>  
              
                I am  Bishal! Full-stack development is an exciting and versatile field. It's impressive that you're skilled in both front-end and back-end technologies, including HTML, CSS, JavaScript, Node.js, MongoDB, Firebase, Supabase, and Next.js. Your expertise in creating sleek interfaces and robust back-end solutions must lead to some fantastic projects.

I'd be interested in taking a look at your portfolio. Can you share a link or some examples of the projects you've worked on recently? I'm keen to explore the innovative work you've been doing in the realm of full-stack development.   
              </p>
              
            </div>
            <button className=' absolute bg-[#00acf0] sad px-5 py-3 z-[30] rounded-3xl top-[89%]'>
              <a href="https://instagram.com/bisxxal"  target="_blank">Say hii 👋👋</a></button>
          </div>
        </div>

    
    </>
  )
}

export default About