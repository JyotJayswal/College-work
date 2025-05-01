# Suppose there are 2 lists,1 containing numbers from 1 to 6 & other containing numbers from 6 to 1.
# Write a program to obtain a list that contains elements obtained
# by adding corresponding elements of the two lists. (hint: use map and lambda functions)

l1=[1,2,3,4,5,6]
l2=[6,5,4,3,2,1]

l3=list(map(lambda i,j:(i+j),l1,l2))  #use map with lambda func. to obtain sum of corresponding nos. 
print(f"l1 list is {l1}")
print(f"l2 list is {l2}")
print(f"The sum of corresponding elements from l1 & l2 list is {l3}")
print("#thala_for_a_reason_7")

"""
-->LAMBDA FUNCTION
Syntax:lambda arguments: expression
Example:
# function that receives an argument and returns its cube.
lambda n:n**3

-->MAP FUNCTION(HIGHER ORDER FUNCTION)
General form of map() function : map(function_to_apply, list_of_inputs)
--> map() returns a map object which can be converted to a list using list() function.

#using lambda with map()
lst1 = [1,2,3,4,5]
m = list(map(lambda x:x*x,lst1))
print(m)   # Output:[1, 4, 9, 16, 25]"""