# A set contains names which begin either with A or with B.Write a program to separate out 
# the names into two sets, one containing names beginning with A and another with B.

set1={"aarush","bhavya","aditi","bhavik","aadhya","bhakti","atharv"}
setA=set()  #create empty set to store names with letter "A"
setB=set()  #create empty set to store names with letter "B"

for item in list(set1):    # accessing items of set by converting into list
    if(item[0]=="a" or item[0]=="A"):   #condition check that the first letter of list items starts with "a" or not
        setA.add(item)                  # if yes,add that list item in setA
    elif(item[0]=="b" or item[0]=="B"): #condition check that the first letter of list items starts with "b" or not
        setB.add(item)                  # if yes,add that list item in setB

print("Set containing names begins with 'A':",setA)     #print setA
print("Set containing names begins with 'B':",setB)     #print setB