a = "BIsxxal as bisx"              #string are immuatable

print(len(a))
print(a.upper())
print(a.lower())

print(a.rstrip('!'))           # to remove special chaerater in last of string
print(a.replace("bisx","bish"))
print('y' in a)        # prints false as y is not present in a    
   
print('y' not in a)            # prints false as y is present in a.

val = "hello guys to most powerfull AI using python "  
print(val.split(" "))       # split the words 
print(val.capitalize())

print(len(val))
print(len(val.center(60)))

str1 = "Wellcome to Console!!  "
print(str1.find("to"))
print(str1.isalnum())
print(str1.isalpha())
print("is space is avslible ",str1.isspace())
print(str1.islower())
print(str1.swapcase())