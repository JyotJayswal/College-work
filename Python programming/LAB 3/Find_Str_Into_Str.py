# Accept two strings. Check whether one string is there in another string.

s1=input("Enter a string:")
s2=input("Enter another string:")

if s2 in s1:        #use IN Keyword for finding the s2 in s1
    print("Yes,s2 is present in s1.")
else:
    print("No,s2 is not present in s1.")