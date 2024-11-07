class parent:
    def __init__(self ,name ,age) -> None:
        self.name = name
        self.age = age

class child(parent):
    def __init__(self ,name , age , prof):
        super().__init__(name ,age )
        self.prof = prof


chil = child('bishal' , 23 ,'programer')
# chil.C_method  ()
# chil.P_method()  
print(f"name is {chil.name} age is {chil.age} and prof is {chil.prof}")
