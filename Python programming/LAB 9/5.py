#Calculate a^b where a and b received through the keyword using recursion.

a=int(input("Enter the value of a:"))   #take user input for a
b=int(input("Enter the value of b:"))   #take user input for b

def power(a,b): #define function named as"power"
    if (b==0):      #if a raised to power 0 then resultant = 1
        return(1)
    else:
        return(a*power(a,b-1))  #recursion function (hint:similar to factorial recursion logic)

result=power(a,b)   #function stores as a variable
print(f"The result of {a} raised to power {b} is {result}") #function calling