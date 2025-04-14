# Take two lists of numbers.Create third list of numbers for only those numbers
# from first list which are not there in 2nd list (use list comprehension). 

print("Enter 10 numbers for list 1:")
l1=[input() for i in range(10)]

print("Enter 10 numbers for list 2:")
l2=[input() for j in range(10)]

l3=[item for item in l1 if(item not in l2)]

print("List 1 is:",l1)
print("List 2 is:",l2)
print("List 3 is:",l3)


# i,j=0
# for l1[i] in range(len(l1)):
#     for l2[j] in range(len(l2)):
#         if(l1[i]!=l2[j]):
#             l3.append(l1[i])
#         else:
#             break
