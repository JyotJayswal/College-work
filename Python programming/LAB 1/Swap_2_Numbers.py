# swap two numbers using a temporary variable


print("Enter Two Numbers:\n")
num1=int(input("NUM1 =")) 
num2=int(input("NUM2 ="))
print("\nBefore Swapping:\n""NUM1 =",num1,"\nNUM2 =",num2)
temp=num2
num2=num1
num1=temp
print("\nAfter Swapping:\n""NUM1 =",num1,"\nNUM2 =",num2)