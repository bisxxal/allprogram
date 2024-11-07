import React from 'react'
import k1 from '../assets/k1.svg'
import k2 from '../assets/k2.svg'
import k3 from '../assets/k3.svg'
import k4 from '../assets/k4.svg'
function Key() {
  return (
    <div className='mt-10 w-full lg:h-screen flex flex-col gap-10 lg:gap-16 items-center justify-center mb-10'>

        <h1 className='lg:text-[50px] text-[20px] font-bold '>Four key questions answered by Crest</h1>

        <div className='flex gap-4 lg:gap-10 items-center justify-center flex-wrap px-4'>
            <div className='bg-[#F1E9FC] flex flex-col justify-center px-5 gap-2 w-full lg:w-[300px] rounded-2xl h-[250px] lg:h-[300px]'>
                <img className='w-12' src={k1} alt="" />
                <h1 className=' text-3xl font-medium mt-3'>What to Order</h1>
                <p>Get accurate demand and days to stock out. Automate purchase planning so you can always have what you need for your next sales cycle.</p>
            </div>
            <div className='bg-[#F1E9FC] flex flex-col justify-center px-5 gap-2 w-full lg:w-[300px] rounded-2xl h-[250px] lg:h-[300px]'>
                <img className='w-12' src={k2} alt="" />
                <h1 className=' text-3xl font-medium mt-3'>What to Order</h1>
                <p>Get accurate demand and days to stock out. Automate purchase planning so you can always have what you need for your next sales cycle.</p>
            </div>
            <div className='bg-[#F1E9FC] flex flex-col justify-center px-5 gap-2 w-full lg:w-[300px] rounded-2xl h-[250px] lg:h-[300px]'>
                <img className='w-12' src={k3} alt="" />
                <h1 className=' text-3xl font-medium mt-3'>What to Order</h1>
                <p>Get accurate demand and days to stock out. Automate purchase planning so you can always have what you need for your next sales cycle.</p>
            </div>
            <div className='bg-[#F1E9FC] flex flex-col justify-center px-5 gap-2 w-full lg:w-[300px] rounded-2xl h-[250px] lg:h-[300px]'>
                <img className='w-12' src={k4} alt="" />
                <h1 className=' text-3xl font-medium mt-3'>What to Order</h1>
                <p>Get accurate demand and days to stock out. Automate purchase planning so you can always have what you need for your next sales cycle.</p>
            </div>
        </div>
        
    </div>
  )
}

export default Key