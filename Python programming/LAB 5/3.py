# Generate 50 random numbers in the range 1 and 30.
# Remove all duplicate values from the list.

import random

random_lst=[random.randint(1,30) for i in range(1,51)]
print(random_lst)
l1=[]

for i in range(0,50):
    for j in random_lst:
        if(random_lst[i]==j):
            # l1.append(j)
            random_lst.remove(i)
# print(l1)  
print(random_lst)          