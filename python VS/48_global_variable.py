x = 23

def myfun():
    global x 
    x = 345
    print("x = ",x)

myfun()

print("x in global scope ", x)