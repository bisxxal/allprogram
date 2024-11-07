
# The enumerate() function takes a collection (e.g. a tuple) and returns it as an enumerate object.

# The enumerate() function adds a counter as the key of the enumerate object.

# Syntax
# enumerate(iterable, start)



# markes = [12,34,56,78,89,67]

# for index ,i in enumerate(markes):
#     print(i,index)
   

# l1 = ["eat", "sleep", "repeat"] 
# # printing the tuples in object directly
# for ele in enumerate(l1):
#     print (ele)
  
# # changing index and printing separately
# for count, ele in enumerate(l1, 100):
#     print (count, ele)
  
# # getting desired output from tuple
# for count, ele in enumerate(l1):
#     print(count)
    # print(ele)

# l1 = ["eat", "sleep", "repeat"]
# s1 = "geek"
  
# # creating enumerate objects
# obj1 = enumerate(l1)
# obj2 = enumerate(s1)
  
# print ("Return type:", type(obj1))
# print (list(enumerate(l1)))
  
# # changing start index to 2 from 0
# print (list(enumerate(s1, 2)))


val  = ["bisxaal" ,"Goutam ","tikili","Biswajit"]

for index,i in enumerate(val,90):
    print(index , i)