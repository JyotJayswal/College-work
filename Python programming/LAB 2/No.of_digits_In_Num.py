#  Accept a number from the user. And print number of digits in it.

num=(input("enter any number:"))  
print(len(num), "digits are present in the number.")


'''any data is input as a string data type in python
   and therefore here we are able to find the length of the input string.
   And if it was typecast into int datatype then we are not able to find
   its length by len() function.'''
