# Count how many vowels are there in a string. Accept the string from the user.
vowels="AEIOUaeiou"
str=(input("Enter a string:"))
count=0
for char in str:
    if char in vowels:
        count=count+1

print("the number of vowels present in the following string:",count)