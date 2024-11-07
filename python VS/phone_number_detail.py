from http import client
import phonenumbers as p
import requests 
from phonenumbers import geocoder, carrier ,timezone

# Parsing String to Phone number
phoneNumber = p.parse("+918249233812")
  
# Pass the parsed phone number in below function
timeZone = timezone.time_zones_for_number(phoneNumber)
  
# print the timezone of a phonenumber
print(timeZone)

Carrier = carrier.name_for_number(phoneNumber, 'en')
  
# Getting region information
Region = geocoder.description_for_number(phoneNumber, 'en')
  
# Printing the carrier and region of a phone number
print(Carrier)
print(Region)


mobileno =  "+919776549232"
mobileno=p.parse(mobileno)
print(mobileno)
print(timezone.time_zones_for_number(mobileno))
print(carrier.name_for_number(mobileno,"en"))
print(geocoder.description_for_number(mobileno,"en"))
print("Valid mobile number: ",p.is_valid_number(mobileno))

print(dir(phoneNumber))