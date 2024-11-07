import os 

# print(os.getcwd())
# os.rename("bisxxal.py" , "myfile.txt")

# os.rmdir(r'C:\Users\bishal\Documents\phone storage\helloFOLDER')     #delete the folder 

# print(dir(os))
# print(os.path(r'all program'))

# os.mkdir('helloFOLDER 1')         # make a folder 
    #make a foleder inside a folder 


# folder_path = 'C:\\Users\\bishal\\Documents\\phone storage'
# folder_name = 'helloFOLDER'

# full_path = os.path.join(folder_path, folder_name)

# os.makedirs(full_path)
# print(os.path.isfile('myfile.txt'))  #for file
# print(os.path.isdir(r'C:\Users\bishal\Documents\phone storage'))    # for folder
# print(os.path.exists(r'C:\Users\bishal\Documents\phone storage'))    #for folder and file 

# os.chdir(r'C:\Users\bishal\Documents\foe Pratice folder')          #change the curent directory 
# print(os.getcwd())
# os.makedirs("helloaefkvjsdvvckjhscbewlkjcbl")
# os.makedirs(r'C:\Users\bishal\Documents\foe Pratice folder\newfolder\agin new foldrer')

# print(os.listdir())       # print the file list of the folder 

# for i in os.listdir():    #printing the file list of the folder 
#     print(i)

# for item in os.listdir(os.getcwd()):    #printing the file list of the folder and path 
#     var = os.path.join(os.getcwd() , item)
#     print(var)

# print(os.path.join('newFolder'))

# show = os.walk(r'C:\Users\bishal\Documents\all programs')

# for cr_path,fol, file in show:
#     print(f'curent path = {cr_path}')
#     print(f'curent fol = {fol}')
#     print(f'curent file = {file}')


# print(os.name)  #names have currently been registered: ‘posix’, ‘nt’, ‘os2’, ‘ce’, ‘java’ and ‘riscos’.

print(os.path.join(r'C:\Users\bishal\Documents\all programs\python VS\myfile.txt'))