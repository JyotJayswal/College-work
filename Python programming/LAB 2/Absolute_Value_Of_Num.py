# Print absolute value of a given number.

number=float(input("Enter any number:"))
if(number<0):
    number=float((number)*(-1))  #int is not use because,it will use floor function
    print("your absolute value is",number)
else:
    print("your absolute value is",float(number))