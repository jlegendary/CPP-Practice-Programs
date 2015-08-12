Problem:
   Write a function, reverseDigit, that takes an integer as a parameter and returns  the  number with  its  digits reversed.
 
 
Analysis:
   The least significant digit can be extracted using this equation: 
      digit = number % 10. 
   Use this as the starting point for the reversed number: 
      reversed number = digit. 
   To get the next digit, remove the least signficant digit using this equation: 
      number = number / 10. 
   To add this to the reversed digit use this equation: 
      reversed number = reversed number * 10 + digit 
   Continue in this manner until the original number is 0.
   In addition to reversing the digit, the sign of the digit must be preserved. 
   To allow the algorithm to work correctly, the absolute value of the number should be used, but the fact that the number was originally negative should be preserved so the sign can be restored before the reversed number is returned.
 
Example:
 number = 12345
 digit = 12345 % 10 = 5
 number  = 12345 / 10 = 1234
 reversed number = digit = 5
 
 digit = 1234 % 10 = 4
 number = 1234 / 10 = 123
 reversed number = 5 * 10 + 4 = 54
 
 digit = 123 % 10 = 3
 number = 123 / 10 = 12
 reversed number = 54 * 10 + 3 = 543
 
 digit = 12 % 10 = 2
 number = 12 / 10 = 1
 reversed number = 543 * 10 + 2 = 5432
 
 digit = 1 % 10 = 1
 number = 1 / 10 = 0
 reversed number = 5432 * 10 + 1 = 54321
 
 
Program:
 Input:
   number: Numbers to reverse.
 Output:
   reversedNumber: Reversed numbers
 
Algorithm:
  Get number to reverse
  Reverse the digits in the number with int reverseDigit(int number);
  Display the reversed number

