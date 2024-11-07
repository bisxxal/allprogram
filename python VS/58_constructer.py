class person :
    # name =  'bisxxal'
    # occ = 'developer'
    def __init__(self , n , o):
        # print("hey i am a developer")
        self.name = n
        self.occ = o

        print(f"{self.name} is a {self.occ}")
        
    def info(self):
        print(f"inside the function -> {self.name} is a {self.occ}")

a = person('goutam' , 'mechenical')
a = person('bisxxal' , 'develpoer')
# a = person() 
# print(a.name) 
a.info()

class countObj:
    count = 0
    def __init__(self) -> None:
        
        
        countObj.count +=1
        

obj1 = countObj()
obj2 = countObj()
obj3 = countObj()
obj4 = countObj()
obj5 = countObj()
print("Total object in this class is : ",countObj.count)


#--------------------------------------------------------CONSTRUCTOR OVERLODING IS NOT ALLOWED ----------------------------------

class demo:
    def __init__(self) -> None:
        print("consteructer 1")

    def __init__(self) -> None:
        print("consteructer 2")
   

# obj1 = demo()

# obj2 = demo(87)