# Generate 30 random numbers and put them in a list.
# Create two more lists – one containing only +ve numbers and another with –ve nos.

import random

l1=[random.randint(-30,30) for i in range(1,31)]
print(l1)

l2=[]
l3=[]

for i in l1:
    if(i<0):
        l2.append(i)
    elif(i>0 or i==0):
        l3.append(i)

print("The list with negative numbers:",l2)
print("The list with positive numbers:",l3)