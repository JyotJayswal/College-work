# Write a function that removes one string from another string, if present.
# Eg: Onestring = “abcdef”, removestring = “cd”.
# The finalstring should contain “abef”.

s1=input("Enter a string:")
s2=input("Enter another string:")

def strcheck(s1):     #function declaration
    if s2 in s1:    #checking,string 2 is present in string 1 or not
        s1=s1.replace(s2,"")    #removing s2 from s1(replacing s2 with white space)
        print(f"the resultant string will be:{s1}")  #function defination--(use f-string)
    else:
        print("string 2 is not present in string 1.")

strcheck(s1)                            #function calling