import React from 'react';

const GradientComponent = () => {
  return (
    <div className="flex flex-col w-full items-center justify-center mt-10 h-[60vh] lg:min-h-screen bg-[#151218]">
      <div className="gradient-bg w-[90%] lg:w-[80%] h-[35vh] lg:h-[60vh] rounded-lg flex gap-4 lg:gap-7 flex-col items-center justify-center text-white">
      <h1 className='text-[20px] lg:text-[50px] font-semibold'> You can grow faster than you think! </h1>  
        <p className= 'w-[90%] lg:w-1/2 text-[14px] lg:text-[16px]'>Plan with Crest to fulfil your demand today, and dreams tomorrow. We bring the methods and technologies of large global companies to help brands of all sizes scale.</p>
        <button className="mt-5 px-5 py-2 bg-black text-white rounded-full hover:bg-gray-700 transition">
        Get started with Crest
      </button>
      </div>
      
    </div>
  );
};

export default GradientComponent;
