def myFun(*args ):

    sum = 0
    for i in args:
        sum += i

    print(sum)

myFun(1,3,2,4,5,2,1123,123,12,312,32)
myFun(1,3,2,4,5,2,1)
myFun(1,3,2,4)