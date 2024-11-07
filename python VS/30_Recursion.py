def fact(n):
    if(n==1):
        return n
    return n*fact(n-1)

print(fact(5))



# fibonaci series

def fibonaci (n):
    if(n<=1):
        return n
    
    else:
        return fibonaci(n-1) + fibonaci(n-2)
    
for i in range(5):
    print(fibonaci(i))