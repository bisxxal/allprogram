# def calculategmean (a,b):
#     mean=(a*b)/(a+b)
#     print(mean)

# def isgrater(a,b):
#     if (a > b):
#         print("first is graete")
#     else:
#         print("SEcond is grater")

# a=9
# b=8
# isgrater(a,b)
# calculategmean(a,b)
# c=8
# d=7
# isgrater(c,d)
# calculategmean(c,d)

# def myfun():
#     a = 23
#     b = 45

#     if(a>b):
#         print("A is grater")
#     else:
#         print("b is garter")

# # calling function 
# myfun()

# x = 23                                      # this is global variables 

# def mainFun():
#     global x                              # in function hear we delare gobal variales 
#     print(x)

#     x= "bisxxal"
#     print(x)

# mainFun()

def myfun():
    val = 1,2,3,4,5,5,3,2
    n = 7 
    sum =0
    s=0
   
     
    for i in val:
        sum = sum+i
        mid = s + n-1 
    # mean = sum/n
    print(mid)

myfun()


def prime(num):
    if num <= 1:
        return False
    for val in range(2, num):
        if num % val == 0:
            return False
    return True

for num in range(1, 100):
    if prime(num):
        print(num)

