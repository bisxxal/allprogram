# with open("myfile.txt" , 'r') as f:
#     print(type(f))
#     f.seek(10)

#     print(f.tell())
#     data = f.read(5)
#     print(data)

with open("myfile.txt" ,'w') as f:
    f.write("hello World!!")

    f.truncate(5)

with open("myfile.txt" , 'r') as f:
    print(f.read())
