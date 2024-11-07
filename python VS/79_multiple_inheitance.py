class bike:
    def __init__(self , name):
        self.name = name
    def show(self):
        print(f'name of bike is {self.name}')

class car :
    def __init__(self , name ,cc):
        self.cc = cc
        self.name = name
    def show(self):
        print(f'name of car is {self.name} and cc is {self.cc}')

class moter ( bike ,car):
    def __init__(self , name ,cc):
        self.cc = cc
        self.name = name

m = moter('harly ' , 1000)
print(m.cc , m.name)
print(m.show())
print(moter.mro())