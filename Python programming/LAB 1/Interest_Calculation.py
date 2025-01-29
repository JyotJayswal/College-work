# SIMPLE INTEREST=PRT/100 ,WHERE P=PRINCIPLE,R=RATE,T=TIME DURATION

principle=float(input("enter your principal amount in rupees:"))
rate=float(input("enter your rate:"))
time=float(input("enter your time duration in years:"))
interest=float(principle*rate*time)/100
print("your interest amount is:",float(interest),"rupees")