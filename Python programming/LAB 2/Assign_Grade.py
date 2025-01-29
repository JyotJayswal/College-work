# Accept marks of three subjects.Print total and average along with whether a
# candidate has passed or fail.If student secures <= 39 marks in any subject,consider
# him as fail.Also assigned a subject wise grade based on the following table:

P=float(input("Enter your Physics marks:"))
C=float(input("Enter your chemistry marks:"))
M=float(input("Enter your maths marks:"))
total=float(P+C+M)
print("\nthe total marks you achieved is:",total)
average=float(total/3)
print("your average score is:",average,"\n")

if(40<=P<=44):
    print("your grade is P\nyour are pass")
elif(45<=P<=49):
    print("your grade is C in Physics\nyour are pass")
elif(50<=P<=54):
    print("your grade is B in Physics\nyour are pass")
elif(55<=P<=59):
    print("your grade is B+ in Physics\nyour are pass")
elif(60<=P<=69):
    print("your grade is A in Physics\nyour are pass")
elif(70<=P<=79):
    print("your grade is A+ in Physics\nyour are pass")
elif(80<=P<=100):
    print("your grade is O in Physics\nyour are pass")
else:
    print("your grade id F in Physics\nyour are fail")

if(40<=C<=44):
    print("your grade is P in Chemistry\nyour are pass")
elif(45<=C<=49):
    print("your grade is C in Chemistry\nyour are pass")
elif(50<=C<=54):
    print("your grade is B in Chemistry\nyour are pass")
elif(55<=C<=59):
    print("your grade is B+ in Chemistry\nyour are pass")
elif(60<=C<=69):
    print("your grade is A in Chemistry\nyour are pass")
elif(70<=C<=79):
    print("your grade is A+ in Chemistry\nyour are pass")
elif(80<=C<=100):
    print("your grade is O in Chemistry\nyour are pass")
else:
    print("your grade id F in chemistry\nyour are fail")

if(40<=M<=44):
    print("your grade is P in Maths\nyour are pass")
elif(45<=M<=49):
    print("your grade is C in Maths\nyour are pass")
elif(50<=M<=54):
    print("your grade is B in Maths\nyour are pass")
elif(55<=M<=59):
    print("your grade is B+ in Maths\nyour are pass")
elif(60<=M<=69):
    print("your grade is A in Maths\nyour are pass")
elif(70<=M<=79):
    print("your grade is A+ in Maths\nyour are pass")
elif(80<=M<=100):
    print("your grade is O in Maths\nyour are pass")
else:
    print("your grade id F in Maths\nyour are fail")