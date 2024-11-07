# The else block just after for/while is executed only when the loop is NOT terminated by a break statement.

 
for x in range(6):
  print(x)
else:
  print("Finally finished!")


for i in range(1, 4):
    print(i)
    break
else: # Not executed as there is a break
    print("No Break")

count = 0
while (count < 1):    
    count = count+1
    print("Printing count : ",count)
    break
else:
    print("No Break")