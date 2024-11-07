# class myClass:
#     name = 'bisxal'
#     @classmethod
#     def fun(bisxxal):
#         print(f"Name is {bisxxal.name}")

# obj  = myClass
# obj.fun()

                                            #    EXAMPLE 2 

# class emp:
#     company = "apple"
#     name  = "bisxxaal"
#     def show(self):
#         print(f"the name is {self.name } and company is {self.company}")
#     @classmethod
#     def changeCompany(bisx , newComapany):
#         bisx.company = newComapany

# obj = emp()
# obj.show()

# obj.changeCompany("tesla")
# obj.show()
                         
                                                #  EXAMPLE 3 
from datetime import date
class method :
    # name = 'bisxxal'

    def __init__(self , name , age):
        self.name = name
        self.age = age
    
    @classmethod
    def fromBirtday (cls , name , year ):
        print( cls(name ,date.today().year - year))
    def display(self ):
        print(f"name is {self.name} age is {self.age} ")

per = method('bisxxal' , 2003)
per.fromBirtday('vjy' , 2056)
per.display()
