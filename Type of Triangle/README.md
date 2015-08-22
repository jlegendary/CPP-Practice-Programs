Problem:
 Define an enumeration type, triangleType, that has the values scalene, isosceles, equilateral, and noTriangle. Write a function, triangleShape, that takes as parameters three numbers, each of which represents the length of a side of the triangle. The function should return the shape of the triangle. (Note: In a triangle, the sum of the lengths of any two sides is greater than the length of the third side.) Write a program that prompts the user to input the length of the sides of a triangle and outputs the shape of the triangle.

Analysis:
 Get the length of the three sides of a triangle, and output the type of triangle. The three sides must satisfy the rule (a + b > c), otherwise it is not a triangle
 All three sides equal     --->> equilateral
 Two sides equilateral     --->> isosceles
 All three sides different --->> scalene


 Algorithm:
  - Input lengths of three side
  - Determine what type of triangle the sides make up
  - Output the type of the triangle
 
 
 Program inputs:
  a, b, c: length of the three sides
 
 Program constants:
  enum trianglesType = {scalene, isosceles, equilateral, noTriangle}
 
 Program output:
  scalene
  isoscele
  equilateral
  no triangle
 




******************
 Program testing:
******************
  2 90 34   --->> not a triangle
  2 6 7     --->> scalene
  7 7 7     --->> equilateral
