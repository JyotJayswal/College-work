# If a positive integer is entered through the keyboard,
# write a recursive function to obtain the prime factors of the number. 

def prime():    #function defining
    
#function defination
    factors=[]  #create empty list to store factors
    prime_factors=[]    #create empty list to store prime_factors
    num=int(input("Enter a positive integer:"))     #take input from user
    for i in range(1,num+1):    #finding factors of input number
        if((num)%(i)==0):       #condition:if num is divide by i then i is factor if num
            factors.append(i)   #store i as factor
    print(f"The factors of {num} are: {factors}")
    
    for item in factors:    #accessing factors as items from list(factors)
        for i in range(2,item): #condition forr checking prime from the factors list
            if((item)%(i)==0):  #if factor divisible by other number it is not a prime
                break
        else:  
            prime_factors.append(item)  #factor/item append to prime_factor list
            
    print(f"The prime factors of {num} are:{prime_factors}")

prime()     #function calling
        