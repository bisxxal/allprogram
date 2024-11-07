import React from 'react'
import grap from '../assets/grap.webp'
function Featers() {
  return (
    <div className='w-full lg:pl-24 pl-4 mt-10'>
        <h1 className='text-3xl font-semibold text-center'>Things your spreadsheet wishes it could do</h1>

      <div className='flex lg:flex-row flex-col-reverse w-full lg:h-[90vh] mt-10 lg:justify-between'>
        
              <div className='w-full lg:w-1/2 flex flex-col justify-center items-center '>
                <div className='mt-9 lg:mt-0'>Accurate Demand Forecasting
                <p className='lg:w-1/2 text-[14px]'>
                Dynamically predict future demand across all channels, with high accuracy and lowest granularity. Crest takes into account what traditional forecasts don't: trends, real-time market signals, promotional activities, and even logistics disruptions. 
                </p>
                </div>

                <div className='w-full mt-10'>
                  <div className='py-5 border-t border-[#00000088] text-xl lg:text-3xl lg:w-[70%]'>HELIX: Workflow Automation</div>
                  <div className='py-5 border-t border-[#00000088] text-xl lg:text-3xl lg:w-[70%]'>Automated Purchese Planning</div>
                  <div className='py-5 border-t border-[#00000088] text-xl lg:text-3xl lg:w-[70%]'>Automated Distribution Planning</div>
                  <div className='py-5 border-t border-[#00000088] text-xl lg:text-3xl lg:w-[70%]'>Easy Integration</div>
                  <div className='py-5 border-t border-[#00000088] text-xl lg:text-3xl lg:w-[70%]'>Custom Dashbord</div>
                  <div className='py-5 border-t border-[#00000088] text-xl lg:text-3xl lg:w-[70%]'>Consensus Planning</div>

                  <button className='mt-5 px-5 py-2 rounded-full border border-purple-600 text-purple-600 mx-auto '>View All Features</button>
                </div>
              </div>
              
              <div className='w-full lg:w-1/2 h-[30vh] lg:h-full gradient-bg lg:rounded-r-none rounded-3xl px-6 flex  '>
                  <img className='w-[1560px] object-contain  ' src={grap} alt="" />
              </div>
          </div>
</div>
  )
}

export default Featers