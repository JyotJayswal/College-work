# Count how many vowels are there in a string. Accept the string from the user.

vowels="AEIOUaeiou"     #define the vowels as a string
str=(input("Enter a string:"))
count=0
for char in str:       #scaning the each character of input string
    if char in vowels: #checking if the character of input string is matched or not 
        count=count+1  #counting the no. of vowels present in the input string

print("the number of vowels present in the following string:",count)


'''
# Accepting the string input from the user
input_string = input("Enter a string: ")

# Define the vowels
vowels = "aeiouAEIOU"

# Initialize a counter for vowels
vowel_count = 0

# Iterate through the string and count vowels
for char in input_string:
    if char in vowels:
        vowel_count += 1

# Output the number of vowels
print(f"The number of vowels in the string is: {vowel_count}")
'''