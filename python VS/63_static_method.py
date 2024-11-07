class math:
    msg = ' my message '
    def __init__(self ,num):
        self.num = num
    def addTonum(self , n):
        self.num = n +self.num
        return self.num 
    
    @staticmethod  
    def add(a,b):
        return a+b
    
obj = math(5)
# obj.addTonum(3)
print(obj.addTonum(3))
print(math.add(4,5)) 
print(obj.add(4,5))

print(obj .msg)