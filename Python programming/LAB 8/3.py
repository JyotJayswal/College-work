# Create an empty set.Write a program that adds five new names to this set,
# modifies one existing name and deletes two names from it.

set1=set()      #create an empty set
l1=["aarush","sanjay","shizuka","jay","vaishali"]   #create a list of 5 names
set1.update(l1)     #add/append the 5 names in empty set
print("initial set:",set1)  #print set1 as initial set

set1.remove("jay")  #remove "jay" from the set1
set1.remove("sanjay")   #remove "sanjay" from the set1
set1.remove("shizuka")  #remove "shizuka" from the set1 to modify it later
set1.add("shizra")      #add "shizra" instead of shizuka

print("updated set:",set1)

'''
l1=["aarush","sanjay","shizuka","jay","vaishali"] 
set1=set()
l1[2]="shizra"      #modify "shizuka" to "shizra" in list tpye collection
l1.remove("jay")    #remove "jay" from list type collection
l1.remove("sanjay") #remove "sanjay" from list type collection
set1.update(l1)     #store list l1 as set in set1
print(set1)         #print set1
print(type(set1))   #check the type of set1

'''