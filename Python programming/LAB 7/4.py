# Write a program that reads a string from the keyboard &
# creates dictionary containing frequency of each character occurring in the string. 

str1=str(input("enter a string:"))
d={}

for char in str1:   #read the input string
    if char in d:   #checking the char stored in empty dictionary
        d[char]+=1  #if char if already present in dict then count+=1
    else:
        d[char]=1   #if char if only 1 time present in dict count=1

print("The character frequency dictionary is:",d)



# str1=str(input("Enter a string:"))
# l1=[]
# l2=[]
# for char in str1:
#     l1.append(char)
# print("user input string is:",l1)
# count=0
# for i in l1:
#     for j in l1:
#         if(i==j):
#             count=+1
#         else:
#             count=1
# l2.append(f"{i}:{count}")
# d=dict(l2)
# print("character frequency dictionary:",d)