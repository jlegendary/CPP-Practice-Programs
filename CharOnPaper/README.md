Problem:
  Write a program that calculates the number of characters in a line and the number of lines that can be printed on a paper based on the following input from the user:


Algorithm:
   - Get length and width of the paper in inches, top, bottom, left, and right margin in inches, the point size of the character, and if single or double spaced
   - Calculate the number of characters that can be written on a line and the number of lines that can be written on a page using the formula above
   - Display the number of characters per line and the number of lines per page





Program: 
   Constant:
      pointsPerInch = 72

   Input: 	
       length: The length of paper in inches
       width: The width of paper in inches
       top: The top margin in inches
       bottom: The bottom margin in inches
       left: The left margin in inches
       right: The right margin in inches
       pointSize: point size of characters
       spacing: s for single and d for double spaced 

Output:
  CharLine: Number of characters per line
  LinePage: Number of lines per page
