import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Navbar from './components/Navbar'
import Hero from './components/Hero'
import Key from './components/Key'
import Review from './components/Review'
import Featers from './components/Featers'
import GradientComponent from './components/GradientComponent '
import Fotter from './components/Fotter' 
import Founderr from './components/Founderr' 

function App() {
  const [count, setCount] = useState(0)

  return (
    <>
    <Navbar/>
      <Hero/>
      <Key/>
      <Review/>
      <Featers/>
      <Founderr/>
      <GradientComponent/> 
      <Fotter/>
    </>
  )
}

export default App
