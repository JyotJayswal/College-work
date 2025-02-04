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
