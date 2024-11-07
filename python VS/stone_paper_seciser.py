import random as r
# print(dir(r))

userInput = int(input("enter 1 for rock 2 for paper 3 for seciser"))
computerInput = r.randint(1 ,3)
print(computerInput)

if(userInput == 1 and computerInput == 3 or userInput == 2 and computerInput == 1 or computerInput == 3 and userInput == 2):
    print("you Win !!")

elif(userInput == computerInput):
    print("draw ")
else:
    print("you lost!") 