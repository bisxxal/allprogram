file = open('myfile.txt', 'r')
 
# This will print every line one by one in the file

# for each in file:
    # print (each)


# read the file
text = file.read()
print(text)
file.close()


# Python code to illustrate with()
with open("myfile.txt") as file: 
    data = file.read()
 
print(data)

with open("myfile.txt", "w") as f:
    f.write("Hello World!!!")