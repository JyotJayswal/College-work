# Given the coordinates (x,y) of center of a circle and its radius,
# determine whether a point lies inside the circle,
# on the circle or outside the circle. (Hint: Use sqrt( ), pow( ) )
import math

centre=(0,0)
print("Given:\nThe coordinates of the centre if circle is:",centre)
radius=5
print("The radius of the circle is:",radius)
x=3
y=4
distance=math.sqrt(pow(x,2) + pow(y,2))
print("the distance of given point from h=the centre of circle is:",distance)
if(distance<radius):
    print("the point is inside the circle.")
elif(distance==radius):
    print("the point is on the boundary of the circle.")
else:
    print("the point is outside the circle.")