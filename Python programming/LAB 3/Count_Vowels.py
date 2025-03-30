# Count how many vowels are there in a string. Accept the string from the user.

vowels="AEIOUaeiou"     #define the vowels as a string
str=(input("Enter a string:"))
count=0
for char in str:       #scaning the each character of input string
    if char in vowels: #checking if the character of input string is matched or not 
        count=count+1  #counting the no. of vowels present in the input string

print("the number of vowels present in the following string:",count)