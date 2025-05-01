# Write a recursive function to obtain average of all numbers present in a given list.

lst=[1,2,3,4,5]
n=len(lst)

def sum(lst,index=0):
    if(index==len(lst)):
        return 0    #-------------
    return(lst[index] + sum(lst,index+1))

sum=sum(lst)
average=(sum)/n
print(f"The average of {n} no. given in list is {average}")