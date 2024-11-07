l = [12,65,21,12,67,67,2,6,756,23]
print(l)

List2 = [2, 3, 4, 5]

l.append(123)
l.sort()
print(l)
l.remove(123)
# l.clear()

# Add List2 to List1
l.extend(List2)
print(l)

print(sum(l))
print(l)


List = [1, 2, 3, 1, 2,1,1,1,1,1,1,1,1, 1, 2, 3, 2, 1]
print(List.count(1))


numbers = [5, 2, 8, 1, 9]
print(min(numbers))
print(max(numbers))


List2 = [2.3, 4.445, 3, 5.33, 1.054, 2.5]
 
#Reverse flag is set True
List2.sort(reverse=True)
print(List2.pop())
#List.sort().reverse(), reverses the sorted list 
print(List2)    