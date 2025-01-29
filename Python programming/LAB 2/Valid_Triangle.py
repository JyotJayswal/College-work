# Check whether a triangle is valid or not,
# when the three angles of the triangle are entered through the keyboard.
# A triangle is valid if the sum of all the three angles is equal to 180 degrees.

print("Enter the 3 angles value of a triangle in degree:")
ang_1=float(input("angle_1= "))
ang_2=float(input("angle_2= "))
ang_3=float(input("angle_3= "))
if(ang_1+ang_2+ang_3==180):
    print("the sum of all angles is equal to 180\nhence your triangle is valid.")
else:
    print("the sum of all angles is not equal to 180\nhence your triangle is not valid.")