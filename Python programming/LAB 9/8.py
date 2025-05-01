# Write a recursive function to obtain length of a given string.

str=str(input("Enter a string:"))

def length(str):
    if(str==""):
        return 0    #---------
    else:
        return(1+length(str[1:]))

print(f"The input string is:{str}")
print(f"The length of string is:{length(str)}")

