# f =open("myfile.txt",'r')

# while(True):
#     line = f.readline()
#     if not line:
#         break
#     print(line)


# f = open('myfile.txt', 'r')
# i=0
# while True:
#     i = i+1
#     line = f.readline()
#     if not line:
#         break
#     m1 = line.split(",")[0]
#     m2 = line.split(",")[1]
#     m3 = line.split(",")[2]

#     print(f"marks of student {i} in math :{m1} " )
#     print(f"marks of student {i} in eng :{m2} " )
#     print(f"marks of student {i} in code :{m3} " )
    
#     print(line)
#                                                                writelines() method




f = open('myfile.txt', 'w')
lines = ['line 1', 'line 2', 'line 3']
for line in lines:
    f.write(line + '\n')
f.close()