# Generate 20 random integers & store them in a list.
# Accept a number from the user &
# print position of all occurrences of that number in the list.

import random   # import random library to generate random numbers

position=[]     #create a empty list to store positions of occurences of no. 
random_lst=[random.randint(1,100) for i in range(1,21)] # use list comprehension  
print(random_lst)   # print the random generated 20 no. list 
a=int(input("Enter any number from above list:"))   #get input from user

for i in range(1,20):   
    if(random_lst[i]==a): #check condition, the no. in list is same as user's input
        position.append(i+1) #i+1 is coz of position=index+1

print("the position of all occurence of",a,"is:",position)