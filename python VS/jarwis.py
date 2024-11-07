import pyttsx3 as p

engine = p.init()

voice = engine.getProperty('voices')
engine.setProperty('voice' , voice[2].id)
print(voice[2].name)
engine.say("hello sir ? how are you !!! i am jarvis")
engine.runAndWait()
engine.stop()

# bisxxal  
