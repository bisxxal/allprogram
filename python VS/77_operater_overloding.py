class dev:
    def __init__(self ,a ) -> None:
        self.a = a
    def __lt__(self , other):
        if(self.a<other.a):
            return " obj is lesser than obj2"
        else:
            return "obj2 is lesser than obj1 "
    def __eq__(self, oth):
        if(self.a == oth.a):
            return " both are equal "
        else:
            return "not equal "
    def __add__(self, oth):
        return self.a + oth.a
        
obj1 = dev(2)
obj2 = dev(1)

print(obj1<obj2)

obj3 = dev(2)
obj4 = dev(2)

print(obj3==obj4)
print(obj3+obj4)