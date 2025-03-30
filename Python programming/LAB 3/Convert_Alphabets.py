# Write your own functions(without using built-in functions)
# to convert all characters of a string into lower case/upper case/toggle case.

s1=input("Enter a string:")

def lower(s1):
    s2=""
    for char in s1:
        if('A'<=char<='Z'):
            s2=s2+(chr(ord(char)+32))
        else:
            s2=s2+(chr(ord(char)))
    print("your string in lowercase is:",s2)

def upper(s1):
    s2=""
    for char in s1:
        if('a'<=char<='z'):
            s2=s2+(chr(ord(char)-32))
        else:
            s2=s2+(chr(ord(char)))
    print("your string in uppercase is:",s2)
          
def toggle(s1):
    s2=""
    for char in s1:
        if('a'<=char<='z'):
            s2=s2+(chr(ord(char)-32))
        
        elif('A'<=char<='Z'):
            s2=s2+(chr(ord(char)+32))
    print("your string in togglecase is:",s2)



lower(s1)
upper(s1)
toggle(s1)