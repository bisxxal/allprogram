# n = (5,3,842,34)
# x = [45,9832,74,9,24,86]
# # print(dir(n))
# print(n.__class__)                         #to know about the mrthod ar 

# # print(dir(x))
# print(sorted(x))
# # print(help(x))


# __dict__ nd help mrthod 


class person:
    def __init__(self , name , age) -> None:
        self.name = name
        self.age = age
    
p = person('bisxaal', 45 )

print(p.__dict__)
print(help(person))
print(help(p))