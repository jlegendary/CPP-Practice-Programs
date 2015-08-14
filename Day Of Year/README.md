Problem:
 Write a program that prints the day number of the year, given the date in the form month-day-year. 
 
Analysis"
 With the month-day-year, display the day of year.
 Also, it should check for leap year with bool. 
 Leap year:
    leap year if it's divisible by 100 and 400, or divisible by 4 and not by 100.
 To get the day number, add the number of days in each month up to the month for the date, then add the day for the date. 
 If the month is February and the year is a leap year, adjust the number of days from 28 to 29 before adding it to the day
 number.
 
 
Algorithm:
  WRITE "Enter date in form month-day-year, e.g., 1-1-2006 is January 1, 2006"
  GET month, ch, day, ch, year
  SET mCount to 0
  SET dayNumber to 0
  WHILE (mCount < month-1)
    SET dayNumber to dayNumber + daysInMonth(m+1, year)
    SET mCount to mCount + 1
  SET dayNumber to dayNumber + day
  WRITE "The day number for " + month + "-" + day + "-" + year  + " is " + dayNumber

 
=====================================
int daysInMonth(int month, int year)
=====================================
 - Returns the number of days in month
 - Use year to determine if there are 28 or 29 days in February
 
Preconditions:
 Constants
  JAN = 1
  FEB = 2
  MAR = 3
  APR = 4
  MAY = 5
  JUN = 6
  JUL = 7
  AUG = 8
  SEP = 9
  OCT = 10
  NOV = 11
  DEC = 12
 Input:
  month - month number between 1 and 12
  year - four-digit year number
 
Postconditions:
 Return:
   days - the number of days in month, accounting for leap year
 
Pseudocode:
  IF (month == JAN or MAR or MAY or JUL or AUG or OCT or DEC)
    SET days to 31
  ELSE IF (month == APR or JUN or SEP or NOV)
    SET days to 30
  ELSE IF (month == FEB)
    IF (isLeapYear(year) == true)
      SET days to 29
    ELSE
      SET days to 28
  RETURN days

 
 
===========================
 bool isLeapYear(int year)
===========================
  -to return true if year is a leap year, otherwise returns false
 
Preconditions:
 Input:
   year - year as a 4-digit integer
 
Postconditions:
 RETURN true if year is a leap year or,
 RETURN false if year is not a leap year
 
Pseudocode:
  IF (year%100 == 0 AND year%400 == 0)
     RETURN true
  ELSE IF (year%4 ==0 AND year%100 !=0)
     RETURN true
  ELSE IF (year%400 !=0)
     RETURN false;
  ELSE
     RETURN false
 
 
*****************
 Program Testing:
*****************
 12-25-2006
 ====>  359
 
 1-1-2006
 ====>  1
 
 3-1-2010
 ====> 60
 