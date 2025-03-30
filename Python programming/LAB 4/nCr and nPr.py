n=int(input("Enter any value for n:")) 
r=int(input("Enter any value for r:")) #n>=r
def factorial(n):
    result=1
    for i in range(1,n+1):
        result=(result)*i
    return result

a=factorial(n)
b=factorial(n-r)
c=factorial(r)

ncr=(a/(b*c))
print("nCr=",ncr)

npr=(a/b)
print("nPr=",npr)