# Write a program that converts words present in a list into uppercase and stores them in a set.

print("Enter 5 strings:")
l1=[str(input()) for i in range(0,5)]   # use list comprehension
l2=[] 
print("The user input strings are:",l1)

for item in l1: #access the items stored in l1
    item=item.upper()   #convert items from lowercase to uppercase
    l2.append(item)     #stores uppercase items in l2

l2=set(l2)   #convert l2 list into set
print(l2)    
print(type(l2))     #check the type of l2