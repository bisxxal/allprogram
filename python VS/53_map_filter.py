myfun = lambda x :x*x*x     # we can use function also


l =  [1,4,2,7,9,5]

newli = map(myfun ,l)                        #map return the obj if we want convert we need to typecast
print(newli)

newl = list(map(myfun,l))                       # to type cast the map object we use list( ) function to convert

print(newl)

# we can use direct lambda function in map

squres  = list(map(lambda x : x*x ,l))
print(squres)
#                   multiple values 
power = [1,3,2,1,5,7,6,8,3,3]
tri = (list(map(pow , l , power)))
print(tri)
#---------------------------------------------------------------------------FILTER ---------------------------------------------------
# syntax----------
# filter(function      , itreable)



def myfun(a):
    return a>4

newfil = list(filter(myfun , l))

print(newfil)