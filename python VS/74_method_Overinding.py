class shape:

    def __init__(self ,x ,y):
        self.x = x
        self.y = y
    def lala(self):
        return self.x*self.y

class Circle(shape):
    def __init__(self ,radius):
        self.radius  = radius

    def area (self ):
        return 3.14 * self.radius  #super().area()
    
cir = Circle(2)
print(cir.area())

print(cir.lala())