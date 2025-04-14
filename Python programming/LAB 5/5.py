# A list contains 5 strings.Convert all these strings to uppercase.

print("Enter 5 strings:")
l1=[str(input(f"string{i}:")) for i in range(1,6)]   # use list comprehension
l2=[] 
print("The user input strings are:",l1)

def capital(l1):    #defining a function named capital

    for item in l1: #use for loop to access list item(the entities present in list)
        item=item.upper()   #use upper() fun. to update all items in uppercase of list
        l2.append(item)     #append the updated items in l2 list
    return(l2)              #return the l2 list
    
print("The strings in uppercase are:",capital(l1))  #function calling


# another solution(if list is already assumed by user)
# l1=["mustang","ferrari","kawasaki","rolls royce","supra"]
# upper_l1=[item.upper for item in l1]
# print(upper_l1)
