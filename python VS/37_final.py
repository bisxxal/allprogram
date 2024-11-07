# try:
#     # Some Code
# except:
#     # Executed if error in the
#     # try block
# else:
#     # execute if no exception
# finally:
#     # Some code .....(always executed)

def myfun():
    try:
        v = int(input("enter the value "))
        print(v)
    except Exception as e :
        print("eroor is ",e)
    finally:
        print("i aalways excute ")

myfun()

try:
    k = 5//0 # raises divide by zero exception.
    print(k)
    
# handles zerodivision exception    
except ZeroDivisionError:   
    print("Can't divide by zero")
        
finally:
    # this block is always executed regardless of exception generation.
     
    print('This is always executed') 