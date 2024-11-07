
Tuple = (0, 1, (2, 3), (2, 3), 1, 
         [3, 2], 'geeks', (0,))
  
# count the appearance of (2, 3)
res = Tuple.count((2, 3))
print('Count of (2, 3) in Tuple is:', res)
  
# count the appearance of [3, 2]
res = Tuple.count([3, 2])
print('Count of [3, 2] in Tuple is:', res)


                                        # Index() Method
                                        # The Index() method returns the first occurrence of the given element from the tuple.

                                        # Syntax:

                                        # tuple.index(element, start, end)


Tuple = (0, 1, 2, 3, 2, 3, 1, 3, 2)
  
# getting the index of 3
res = Tuple.index(3)
print('First occurrence of 3 is', res)
  
# getting the index of 3 after 4th
# index
res = Tuple.index(3, 4)
print('First occurrence of 3 after 4th index is:', res)