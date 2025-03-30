# Print all alphabets in upper case and in lower case.
def upper():
    for i in range(65,91):  #ASCII Value for (A TO Z)=(65 TO 90)
        print(chr(i))       #typecast the ASCII Value into character

def lower():
    for i in range(97,123): #ASCII Value for (a to z)=(97 TO 122)
        print(chr(i))       #typecast the ASCII Value into character
    
print("The alphabets in uppercase:")
upper()

print("The alphabets in lowercase:")
lower()