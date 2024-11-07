import speech_recognition as sr
import openai as o
import pyttsx3 as p
import wikipedia
import pyaudio as pa
import os 
import webbrowser
import datetime
import random
import numpy as np
# Initialize the text-to-speech engine
engine = p.init()

# Function to speak text
def speak(text):
    engine.say(text)
    engine.runAndWait()

def takeComand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("listing.......")
        r.pause_threshold =1
        audio = r.listen(source)
    try:
        print("Recongnizing....")
        query = r.recognize_google(audio , language='en-US')
        print(f"You said: {query}")
        return query
    except sr.UnknownValueError:
        print("Sorry, I didn't understand that.")
        return ""
    except sr.RequestError as e:
        print(f"Request error: {str(e)}")
        return ""

# Main loop
if __name__ == "__main__":
    speak("Hello,Sir , I'm jarvish. How can  I assist you today?")

    while True:
         
        text = takeComand()
        sites = [["youtube", "https://www.youtube.com"], ["wikipedia", "https://www.wikipedia.com"], ["google", "https://www.google.com"],]
        speak(text)
    