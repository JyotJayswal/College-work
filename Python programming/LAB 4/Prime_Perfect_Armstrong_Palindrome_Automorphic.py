num=int(input("Enter any positive number:"))
def prime(num):
    if(num<=0):
        print("invalid input")
    elif(num==1):
        print(f"{num} is not a prime number.")
    else:
        for i in range(2,num):
            if((num)%(i)==0):
                print(f"The {num} is not a prime number.")
                break
        else:
            print(f"The {num} is a prime number.")
            
prime(num)

def perfect(num):
    if(num<=0):
        print("invalid input")
    sum=0
    for i in range(1,num):
        if((num)%(i)==0):
            sum=sum+i
    if(sum==num):
        print(f"The {num} is perfect number.")
    else:
        print(f"The {num} is not perfect number.") 

perfect(num)

def automorphic(num):
    square=(num)**2
    a=len(str(num))
    remainder=(square)%(10*a)
    if(num==remainder):
        print(f"the {num} is automorphic number.")
    else:
        print(f"the {num} is not automorphic number.")

automorphic(num)

def palindrome(num):
    remainder=0
    reverse=0
    temp=num
    for i in (str(num)):
        remainder=int((num)%10)
        reverse=(reverse)*10+remainder
        num=num/10
    if(temp==reverse):
        print("The",temp,"is palindrome.")
    else:
          print("The",temp,"is not palindrome.")
if(len(str(num))>=3):
    palindrome(num)

