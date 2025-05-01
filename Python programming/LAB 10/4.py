# Consider the following list:lst = ['madam','Python',"malayalam",12321]
# Write a program to print those strings which are palindromes.

lst=["officer","python","malayalam","12321"]

palindrome=list(filter(lambda i:i==i[::-1],lst))   #use filter function to store only strings which are palindrome
                                                    #use lambda func. to reverse the string using string slicing
print(f"The list containing palindrome strings is:{palindrome}")



"""METHODS TO REVERSE A STRING

1) SIMPLE METHOD
my_string = "hello"
reversed_string = my_string[::-1]
print(reversed_string)  # Output: "olleh"

2)USING FOR LOOP
s = "hello"
reversed_s = ""
for char in s:
    reversed_s = char + reversed_s
print(reversed_s)  # Output: "olleh"
"""
