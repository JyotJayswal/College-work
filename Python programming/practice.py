print("enter any three numbers:")
num1=int(input("num_1="))
num2=int(input("num_2="))
num3=int(input("num_3="))
if(num1>num2 and num1>num3):
    print(num1, " is the largest number")
elif(num2>num1 and num2>num3):
    print(num2, "is the largest number")
else:
    print(num3, "is the largest number")