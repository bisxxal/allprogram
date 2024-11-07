# clear()=========>Removes all the elements from the dictionary
# copy()==========>Returns a copy of the dictionary
# fromkeys()======>Returns a dictionary with the specified keys and value
# get()===========>Returns the value of the specified key
# items()=========>Returns a list containing a tuple for each key value pair
# keys()==========>Returns a list containing the dictionary's keys
# pop()===========>Removes the element with the specified key
# popitem()=======>Removes the last inserted key-value pair
# setdefault()====>Returns the value of the specified key. If the key does not exist: insert the key, with the specified value
# update()========>Updates the dictionary with the specified key-value pairs
# values()========>Returns a list of all the values in the dictionary

Employee = {"Name": "Dev", "Age": 20, "salary":45000,"Company":"WIPRO"}

print(Employee.get("Name"))
print(Employee.items())
print(Employee.pop("salary"))
print(Employee)
print(Employee.values())
del Employee["Name"]


dict = {7: "Ayan", 5: "Bunny", 8: "Ram", 1: "Bheem"}  
sorted(dict)  
print(dict)