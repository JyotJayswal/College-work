# A string is entered through the keyboard.
# Write a recursive function that counts the number of vowels in this string.

str=str(input("Enter a string:"))
count=0
vowels="AEIOUaeiou"
def count_vowels(str):
    for char in str:
        if char in vowels:
            count=+1
    return(count)

result=count_vowels(str)
print(f"there are {result} vowels present in the following string ")

'''
def count_vowels(s):
    if s == "":
        return 0
    elif s[0].lower() in 'aeiou':
        return 1 + count_vowels(s[1:])
    else:
        return count_vowels(s[1:])

# Main program
text = input("Enter a string: ")
vowel_count = count_vowels(text)
print(f"Number of vowels in the string: {vowel_count}")
'''