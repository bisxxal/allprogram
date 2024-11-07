class Base:
    # def __init__(self) -> None:
    #     print("i am called base class")

    def myfun2(self, x):
        print( x*x*x)

class Derived :
    def myfun(self):
        print("I am derived class called ")

class myclass (Base , Derived):

   def __init__(self):
        print( ' i am 3d derived multiple ')

dev= myclass()
dev.myfun2(56)
dev.myfun()