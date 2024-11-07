import React from 'react'
import hero from '../assets/hero.svg'
import hb from '../assets/hb.svg'
function Hero() {
  return (
    <div className=' w-full h-screen lg:min-h-[110vh] bg-[#151218] pb-36 text-white flex flex-col lg:flex-row lg:justify-between justify-center lg:rounded-t lg:rounded-[100px] overflow-hidden'>
        <div className='w-full px-4 lg:w-1/2 flex flex-col lg:justify-center lg:items-center'>
          <h1 className='text-[30px] lg:text-[70px] lg:leading-[80px] font-semibold '>
        Every order <br />
        fulfilled, on time.
          </h1>

        <p className=' text-[17px] lg:ml-16 mt-4 lg:w-[80%] '>Eliminate overstocking and under-stocking with Crest. Built by supply-chain experts, it brings the same technology used by large global brands to power fast-growing startups. In short, we make supply meet demand, and then help you grow both.</p>
       
       <div className='flex items-center lg:w-[75%] mt-5'>
       <button className="gradient-border border px-4 py-2 rounded-full text-white  transition">
        Get started with Crest
      </button>
        <img src={hb} alt="" />
       </div>

        </div>
        <div className='px-4 lg:px-0 mt-10 lg:mt-0 relative flex lg:justify-end lg:items-end pb-10w-full lg:w-1/2 '>
          <div className=' absolute bottom-[-50px] right-[-10px] bg-[#ad73dc69] filter blur-[90px]  w-[200px] h-[200px] lg:w-[300px] rounded-full  lg:h-[300px]'></div>
          <div className=' absolute bottom-[100px] right-[-100px] bg-[#e6889848] filter blur-[90px] w-[200px] h-[200px]  lg:w-[400px] rounded-full  lg:h-[400px]'></div>
          <img className='lg:w-[80%]  ' src={hero} alt="" />
        </div>
    </div>
  )
}

export default Hero