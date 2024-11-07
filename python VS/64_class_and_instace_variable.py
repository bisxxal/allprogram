class myclass:
    vlu = 25
    def __init__(self , name) :
        self.name = name
    def showdetail(self):
        print(f"name is {self.name} and age is {self.vlu}")

obj = myclass("bisxxal")
obj.vlu = 19
obj.showdetail()
obj1 = myclass("goutam")
obj1.showdetail()