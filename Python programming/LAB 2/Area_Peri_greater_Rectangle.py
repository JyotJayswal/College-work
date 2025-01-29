# Given the length and breadth of a rectangle,
# write a program to find whether the area of the rectangle
# is greater than its perimeter.

print("check whether the area of the rectangle is greater than its perimeter or not")
length=float(input("Enter the lenght of rectangle:"))
breadth=float(input("Enter the breadth of rectangle:"))
area=(length)*(breadth)
perimeter=2*(length+breadth)
if(area>perimeter):
    print("yes,the area of rectangle is greater than its perimeter.")
else:
    print("no,the area of rectangle is not greater than its perimeter.")