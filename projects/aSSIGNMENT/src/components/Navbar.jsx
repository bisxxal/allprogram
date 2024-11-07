import React, { useState } from 'react'

function Navbar() {

  const [click ,setClick] = useState(false)

  return (
    <>
    <div className='flex sticky w-full items-center justify-between h-[70px] bg-[#151218]  text-white px-4 lg:px-24 '>
      <div className='text-3xl font-semibold'>CleverBooks</div>

      <div className='hidden lg:flex gap-5'>
        <a href="">Product</a>
        <a href="">Pricing</a>
        <a href="">Industry</a>
        <a href="">Customer Stories</a>
        <a href="">About</a>
        <a href="">Blog</a>
      </div>
      <div className='hidden lg:flex gap-5'>
        <button className=' text-[#AD73DC] '>Login</button>
        <button className='bg-[#AD73DC] px-7 py-3 font-semibold rounded-full'>Talk to Us</button>
      </div>

<div onClick={()=> setClick(!click)} className={`text-[50px]`}> {click ?  "x" :'='}  </div>
      
    </div>
    <div className={`${click ? ' block ' : ' hidden '} w-full h-screen bg-white `}>
    <div className='flex flex-col text-lg p-10 gap-12'>
        <a className=' hover:text-purple-500' href="">Product</a>
        <a className=' hover:text-purple-500' href="">Pricing</a>
        <a className=' hover:text-purple-500' href="">Industry</a>
        <a className=' hover:text-purple-500' href="">Customer Stories</a>
        <a className=' hover:text-purple-500' href="">About</a>
        <a className=' hover:text-purple-500' href="">Blog</a>
      </div>
      <div className=' flex justify-center'>
      <button className='gradient-bg px-7 font-bold text-white py-4 rounded-full'>Talk to us </button>
      </div>
      </div>
    </>
  )
}

export default Navbar