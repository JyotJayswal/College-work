# Create a list of 5 odd integers and 4 even integers using random nos.
# Replace the third element of odd integers with a list of 4 even integers.

print("enter any 5 odd numbers:")
for i in range(1,6):
    odd=[int(input())]
print("List of odd no.:",odd)           #print list of 5 odd no.

print("enter any 4 even numbers:")
for i in range(1,5):
    even=[int(input())]
print("List of even no.:",even)          #print list of 4 even no.

odd.pop(2)      #Remove 3rd element/item of odd_no list     
odd.insert(2,even)    #insert 3rd item in odd_no list as whole even_no list

print("The new list is",odd)