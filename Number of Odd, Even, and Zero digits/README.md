Problem:
 Write a function that takes as a parameter an integer (as a long long value) and returns the number of odd, even, and zero 
 digits.
 
Program:
 Input:
  checkNum: number to check to see how many are odd, even, or 0
 Output:
  oddNum: Number of odd digits
  evenNum:Number of even digits
  zeroNum:Number of zero digits
 
Pseudocode:
 WRITE "Enter an integer to check to see how many numbers are odd, even, or 0: "
 GET checkNum;
 check how many are odd, even, or 0 in void digitTest
 WRITE "Number of odd digits: " oddNum
 WRITE "Number of even digits: " evenNum
 WRITE "Number of zero digits: " zeroNum
 
 
 ===========================================================================
 void digitTest(long long checkNum, int &oddNum, int &evenNum, int &zeroNum)
 ===========================================================================
 -Find how many are odd, even, and 0 digits there are in an integer
 
 Precondition:
   Input:
     checkNum: the number to check, as an integer
 Postcondition:
   Output: 
     oddNum: number of odd digits in an integer
     evenNum: number of even digits in an integer
     zeroNum: number of zero digits in an integer
 
 Pseudocode:
  IF (checkNum < 0)
    SET checkNum = checkNum * -1
 WHILE (checkNum > 0)
    SET digit = checkNum %10
    IF (digit ==0)
      zeroNum = zeroNum+1
    ELSE IF (digit %2 ==0)
      evenNum = evenNum+1 
    ELSE
      oddNum = oddNum+1
    SET checkNum = checkNum/10
 
 
 
 **************
 Program Test:
 **************
19822169
 ===> 4 odd, 4 even, 0 zero
1241498
 ===> 3 odd, 4 even, 0 zero