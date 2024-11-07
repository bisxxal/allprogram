class student:
    def __init__(self,name ,id ,age):
        self.name = name
        self.age = age
        self.id = id

s = student ("jhon" , 34 , 23)
print(getattr(s,'name'))

setattr(s,"age" , 56)
print(getattr(s,'age'))

print(hasattr(s,'id'))
delattr(s,'age')
print(s.age)
# print(getattr(s,'age'))