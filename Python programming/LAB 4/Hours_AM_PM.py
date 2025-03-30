# h=input("Enter the hours:")
# m=input("Enter the minutes:")
# s=input("Enter the seconds:")
# print("Entered time in H:M:S format:",h,":",m,":",":",s)
# if(0<=h<=4):
#     print()
# hour=input("Enter the hours:")
print("The time of a day in 24-hours format:\n")
for num in range(0,12):
    if(num==0):
         print(f"the time is {num}:00 midnight")
    else:
         print(f"the time is {num}:00 AM")
for num in range(12,25):
     if(num==12):
          print(f"the time is {num}:00 noon")
     else:
         print(f"the time is {num}:00 PM")
