
class person:
    def __init__(self , name , age) -> None:
        self.name = name
        self.age = age
    
    @classmethod
    def from_string(cls , string ):
        name , age = string.split(',')
        return cls(name , int(age))
    

string = 'bisxal , 23'
p = person.from_string(string )
# print(p.__dict__)
print(p.age , p.name)