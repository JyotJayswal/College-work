# Generate 50 random numbers in the range 1 and 30.
# Remove all duplicate values from the list.

import random

random_lst=[random.randint(1,30) for i in range(1,51)]
print(random_lst)
l1=[]

for i in random_lst:
        if(i not in l1):
            l1.append(i)

l1.sort()
print(l1)          