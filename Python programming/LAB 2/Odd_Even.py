#Check whether a given number is odd or even

num=int(input("Enter any number:"))
if(num%2==0):                   # using modulus(%) for finding remainder
    print("the number is even.")
else:
    print("the number is odd.")