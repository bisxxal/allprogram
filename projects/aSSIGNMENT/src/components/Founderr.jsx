import React from 'react'

function Founderr() {
  return (
    <div className='w-full my-10 overflow-hidden lg:mt-20 lg:h-[100vh] flex lg:flex-row flex-col justify-between lg:pb-20 lg:px-24 px-4'>
        <div className=' relative lg:w-1/2 w-full '>
            <img className=' rounded-3xl w-full h-full object-cover ' src="https://cdn.prod.website-files.com/639b3e775b326dcf7cea3e70/64df240c8d5e1c29b06d3a95_Founders%20Photo-p-800.webp" alt="" />
        
        <div className=' absolute lg:bottom-[-70px] bottom-[-50px] right-[20px] lg:right-[-90px] flex items-center justify-center px-7 font-medium  h-[100px] bg-[#dec9fa]  rounded-3xl w-[350px]'>
        Rahul Vishwakarma, Akhil Kumar & Yogesh Byahatti - Founders
        </div>
        </div>
        <div className='mt-32 lg:w-1/2 w-full '>
            <div className='h-full lg:px-16 gap-5 flex flex-col  justify-center '>
                <h1 className='text-3xl font-bold'>From the founders</h1>
                <p>
                We are a young company solving an age-old problem: Supply Chain. Our goal is simple: to eradicate stock outs for businesses that want to grow faster. Our background, tech expertise, and empathy allow us to do just that. 
                <br />
                Thank you for checking out Crest, and we hope to help you always be in stock!
                </p>
            </div>
        </div>
    </div>
  )
}

export default Founderr