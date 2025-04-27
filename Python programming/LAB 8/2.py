# Write a program to create a set containing 10 random numbers in the range 15 to 45.
# Count how many of these numbers are less than 30. Delete all numbers that are greater than 35.

"The set contains only 10 values if all are different otherwise it carries less than 10 values"

import random
random_set={random.randint(15,46) for i in range(0,10)}    #using set comprehension
print("Initial set:",(random_set))      # print random set as initial set
count=0

for i in list(random_set):  #convert set into list as after removing the no.>35 the size of set changes
    if(i<30):               #if list item less 30 count+=1
        count+=1
    elif(i>35):             #if item greater than 35 remove it from set
        random_set.discard(i)   #you can also use remove() method in place of discard()

print(f"There are {count} numbers less than 30")
print("Set after removing numbers greater than 35:",random_set)