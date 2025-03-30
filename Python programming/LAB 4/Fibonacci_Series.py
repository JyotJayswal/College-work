n=int(input("Enter the number of terms to print in fibonacci series:"))
a=0
b=1
c=a+b
print(a,b,c,end=" ")
for i in range(4,n+1):
    a=b
    b=c
    c=a+b
    print(c,end=" ")
    