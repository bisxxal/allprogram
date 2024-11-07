import React from 'react'
import sms from '../assets/sms.svg'
import review from '../assets/review.webp'
function Review() {
  return (
    <div className='w-full h-[80vh] flex lg:flex-row flex-col-reverse justify-between px-4 lg:px-24'>
        <div className='lg:w-[70%] w-full h-full' >
            <div className=' flex flex-col gap-5'>
                <p className=' lg:w-[90%] text-[17px]'>D2C brands face issues with supply chain management and high growth startups are not equipped to run their demand forecast manually. Crest automates all the workflows and helps brands predict high demand periods and be ready to cater to customer demands. It has a direct impact on the revenue readiness of a company and that's the value we see Crest unlocking for many companies in the future. Rahul and team have built a robust product with years of their experience distilled into the workflows.</p>

                <div className=' flex w-full justify-between pr-20 items-center'>
                    <div className=' gap-3 items-center flex'>
                    <img className='w-14 object-cover rounded-full h-14' src="https://t4.ftcdn.net/jpg/03/64/21/11/360_F_364211147_1qgLVxv1Tcq0Ohz3FawUfrtONzz8nq3e.jpg" alt="" />
                        <div> <h1 className=' font-semibold text-lg'>Bishal Kandi</h1> <p>Co-founder,Samosa Party</p></div>
                    </div>
                        <div >
                            <img className='hidden lg:block w-[100px]' src={sms} alt="" />
                        </div>
                </div>
            </div>
            <div className=' w-full flex flex-wrap lg:justify-between gap-4 lg:gap-0 pr-10 mt-10'>
                <div className='flex items-center gap-2 justify-center flex-col w-[170px] lg:w-1/4 h-[130px] rounded-2xl bg-[#F1E9FC] '> <h1 className='text-3xl text-[#F88F83] font-semibold  '>Upto 95%</h1> <p>Demand Fulfilment</p> </div>
                <div className='flex items-center gap-2 justify-center flex-col w-[170px] lg:w-1/4 h-[130px] rounded-2xl bg-[#F1E9FC] '> <h1 className='text-3xl text-[#F88F83] font-semibold  '>  &lt; 3 %</h1> <p>Daily Stock-out</p> </div>
                <div className='flex items-center gap-2 justify-center flex-col w-[170px] lg:w-1/4 h-[50px] rounded-full lg:rounded-2xl border-[3px] border-[#F1E9FC] '> <h1 className='text-lg text-[#F88F83]  '>Read Story </h1> </div>
            </div>
        </div>
        <div className='w-full lg:w-[30%] h-full rounded-xl  p-[1px]' >
            <img className='w-full border-[2px] h-[70%] border-purple-600 object-cover rounded-xl' src={review} alt="" />
        </div>
    </div>
  )
}

export default Review