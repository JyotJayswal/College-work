# Generate the list of 10 different random numbers between -15 and 15.
# Create a new list by obtaining square of all numbers in a list.

import random       #import random library 
l1=[random.randint(-15,15) for i in range (0,10)]   #store 10 random nos. b/w (-15 to 15) using list comprehension
print(f"The random number list is:{l1}")    #print random obtained list

square=list(map(lambda i:i*i,l1))   #use map with lambda function to have squares of corresponding nos.
print(f"The list with square of corresponding numbers is:{square}") #print squares of nos. 
