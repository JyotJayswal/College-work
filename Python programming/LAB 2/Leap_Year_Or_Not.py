# Accept a year value from the user. Check whether it is a leap year or not.

year=int(input("Enter any year:"))
if(year%4==0):
    if(year%100!=0):
        print(year,"is a leap year.")
else:
    print(year,"is not a leap year.")