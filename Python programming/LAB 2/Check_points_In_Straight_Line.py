# Given three points (x1,y1), (x2,y2) and (x3,y3),
# check if all the three points fall on one straight line.

print("Check whether 3 points lies on a straight line or not.")
print("enter any three coordinates value:")
x1,y1=1,2
x2,y2=2,4
x3,y3=3,6

# x1,y1=map(float,input("Enter the coordinates of point_1(x1,y1)="))
# x2,y2=map(float,input("Enter the coordinates of point_2(x2,y2)="))
# x3,y3=map(float,input("Enter the coordinates of point_3(x3,y3)="))

print("(x1,y1)=",x1,y1)
print("(x2,y2)=",x2,y2)
print("(x3,y3)=",x3,y3)
slope1=(y2-y1)/(x2-x1)
slope2=(y3-y2)/(x3-x2)
slope3=(y3-y1)/(x3-x1)
if(slope1==slope2):
    print("all 3 points are on a straight line.")
elif(slope2==slope3):
    print("all 3 points are on a straight line.")
elif(slope1==slope3):
    print("all 3 points are on a straight line.")
else:
    print("no,all points are not on a straight line.")