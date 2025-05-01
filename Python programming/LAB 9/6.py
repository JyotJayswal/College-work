# A list contains some negative and some positive values. Write a recursive function that 
# sanitizes the list by replacing all negative numbers with 0.

print("Enter some positive & negative numbers:")
lst=[int(input()) for lst in range(0,10)]   #take user input

def sanitize(lst,index=0):  #function define with 2 arguments
    while(index<len(lst)):  #check/scan the list until index==len(list)
        if(lst[index]<0):   #if condition to check the list[0] element is less than 0
            lst[index]=0    #if=True lst element replace with 0
        sanitize(lst,index+1)   #recurse the function with 1 increment in index(to run function for 1 lst element)
        return(lst)         # return the lst
    
print(f"original list of numbers:{lst}")    #print original list
sanitize_lst=sanitize(lst)                  #stores function in a variable
print(f"sanitize list of numbers:{sanitize_lst}")   #function call & print the reversed list
    

