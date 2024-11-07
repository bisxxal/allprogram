dis={"biss":"human "}

print(type(dis))
           
Employee = {"Name": "Johnny", "Age": 32, "salary":26000,"Company":"^TCS"}        
print(type(Employee))        
print("printing Employee data .... ")        
print(Employee)

print(Employee["Age"])
print(Employee.get('sala'))

for val in Employee:
    print(Employee[val])

print(Employee.items())