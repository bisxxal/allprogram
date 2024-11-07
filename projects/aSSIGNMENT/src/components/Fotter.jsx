import React from 'react'

function Fotter() {
  return (
    <div className=' w-full h-[70vh] lg:min-h-screen  bg-[#151218] px-5 lg:px-28 flex lg:flex-row flex-col gap-16 lg:gap-0  lg:justify-between items-center text-white'>

        <div className='w-full  lg:w-1/2 flex flex-col'>
            <h1 className='text-[50px]'>Cleaver Books</h1>

            <p className='lg:block hidden text-sm w-[70%] mt-6 mb-52'>Crest is an AI-powered supply chain software that provides companies tools for demand forecasting, inventory planning and more. This helps them have the right amount of stock, optimise space and fulfil every order.</p>

            <div>
            Copyright 2024 Crest
                Terms of Service
                Privacy Policy
                Conifer Innovations Private Limited
                CIN: U72900KA2022PTC163144
            </div>
        </div>
        <div className='w-full lg:w-1/2 flex lg:justify-end'>


            <div className='flex flex-col gap-3 lg:gap-1'>
           <h2>  Contact Crest</h2>
           <h2>  sales@getcrest.ai</h2>
           <h2>  Registered Office:</h2>
           <h2>  1507, Incubex, 11th cross road,<br />19th Main Road Bengaluru, India. 560102</h2>
           <h2>  Corporate Office:</h2>
           <h2>  291, All Time Space, 4th Floor,</h2>
           <h2>  15th A Cross, Sector - 6,</h2>
           <h2>  HSR Layout, Bengaluru,</h2>
           <h2>  India. 560102</h2>
            </div>
        </div>
        
    </div>
  )
}

export default Fotter