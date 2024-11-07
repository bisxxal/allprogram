class base:
    def __init__(self) -> None:
        self.__name = 'bisxxal'
    def _myfun(self , x):
        print("hey ia am called ", x )

class student(base):
   
    pass

d = base()
obj = student()
# print(d.__name)                                 #cannot acces its privet 
print(d._base__name)    #access by this way  
print(d._base__myfun(45))    #access by this way


print(obj._base__name)    #access by this way  
print(obj .base__myfun(45))    #access by this way  


# print(d.__dir__())
