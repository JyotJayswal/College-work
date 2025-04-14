# Create a list of 5 odd integers and 4 even integers using random nos.
# Replace the third element of odd integers with a list of 4 even integers.

print("enter any 5 odd numbers:")
odd_no=[]
for i in range(1,6):
    odd=int(input())
    odd_no.append(odd)
print(odd_no)           #print list of 5 odd no.

print("enter any 4 even numbers:")
even_no=[]
for i in range(1,5):
    even=int(input())
    even_no.append(even)
print(even_no)          #print list of 4 even no.

odd_no.pop(2)      #Remove 3rd element/item of odd_no list     
odd_no.insert(2,even_no)    #insert 3rd item in odd_no list as whole even_no list

print("The new list is",odd_no)