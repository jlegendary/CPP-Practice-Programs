Problem:
	Write a program that prompts the user to enter the center and a point on the circle. The program should then output the circle’s radius, diameter, circumference, and area. 
	
Analysis:
  Let's imagine that (x1, y1) is the center of the circle and (x2, y2) is a point on the circle:
  We can then derive the formulas we need:
    -The diameter is 2 * radius
    -The circumference is 2 * r * π
    -The area is π * r2

Algorithm:
  -Get the x,y coordinates of the two points  (getPoints)
  -Calculate the radius (calcRadius)
  -Calculate the diameter (calcDiameter)
  -Calculate the circumference (calcCircumference)
  -Calculate the area (calcArea)
  -Display calculated quantites (showCircleParameters)