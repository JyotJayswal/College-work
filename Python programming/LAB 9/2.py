# A positive integer is entered through the keyboard.
# Write a function to find its binary equivalent of this number.

num=int(input("Enter a positive integer:")) #takes input from user
n=num       #stores the original number so it don't change
def binary(num):    #define a function named binary which takes argument as num
    binary=""     #initial binary variable as empty string
    if(num==0):   #if condition for num=0
        return("0")   #if condition "true"--> function returns "0"
     
    else:   #if condition "false" it follows else block
        while(num>0):   #while condition apply
            remainder=(num)%2   #stores the remainder after dividing num by 2
            binary=str(remainder)+binary #add remainder at the beginning (hint:understand logic)
            num=(num)//2    #update num as quotient after dividing num by 2(hint:understand logic)
    return(binary)  #function return binary 

result=binary(num)  #stores function in a variable
print(f"The binary representation of {n} is {result}")  #function calling by print statement
    

