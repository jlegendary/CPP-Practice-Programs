Problem:
 During the tax season, every Friday, the J&J accounting firm provides assistance to people who prepare their own tax 
 returns. Their charges are as follows: 
    a. If a person has low income (<= 25,000) and the consulting time is less than or equal to 30 minutes, there are no 
       charges; otherwise, the service charges are 40% of the regular hourly rate for the time over 30 minutes.
    b. For others, if the consulting time is less than or equal to 20 minutes, there are  no  service  charges;  otherwise, 
       service  charges  are  70%  of  the regular hourly rate for the time over 20 minutes.
 
 (For example, suppose that a person has low income and spent 1 hour and 15 minutes, and the hourly rate is $70.00. Then the 
  billing amount is 70.00 x 0.40 x (45/ 60) = $21.00.)
 
  Write a program that prompts the user to enter the hourly rate, the total consulting time, and whether the person has low
  income. The program should output the billing amount. Analyze and design the program, then write the code. Turn in your
  analysis and design, and your source code. You must use functions in your design and use the appropriate mechanism for
  passing your parameters (by value or by reference). Do not use global variables.

Analysis:
 With the given income, consult time, and hourly rate, determine the bill
 Customers with less than or equal to 25000 income, and consult time of less than or equal to 30 minute, no charge
 Customer with less than or equal to 25000 income, and consult time of more than 30 minute, 40% charge of hourly rate for the times over 30 minutes.
 Customers over 25000 income, bill is free for consult time 20 minutes or less.
 Cusomters over 25000 income, charge is 70% for any consult time over 20 minutes.
 
Algorithm:
 - Get information 
 - Calculate billing amount
 - Display billing amount
 
Program
 Input:
   income: income of the individual
   consultTime: time consulted
   hrRate: hourly rate charge
 Output:
   bill: total billing amount
 Const: 
   incomeLimit: income cut-off limit
 

Psudocode(Main):
 GET information(SET income, consultTime, hrRate)
 SET bill = totalBill(income, consultTime, hrRate)
 WRITE "The total billing amount is $" bill

 
====================================================================
void information(double &income, double &consultTime, double &hrRate)
====================================================================
- Prompt the user to enter in the information needed for the bill
  
Postconditions:
 output:
   income: income of customer
   consultTime: time spent consulting
   hrRate: hourly rate charge
 
 Algorithm:
 - Prompt user to input information
 - Get information
 - Print information
 
 Pseudocode:
  WRITE "Enter the income: $" income
  WRITE "Enter the consult time in minutes: " consultTime
  WRITE "Enter the hourly rate: $" hrRate;
 
==================================================================
double totalBill(double income, double consultTime, double hrRate)
==================================================================
 - Calculate the billing amount
 
Preconditions:
 Input:
  income: customer's income
  consultTime: time spent consulting
  hrRate: hourly rate charge
 
Postconditions:
 Output:
   bill: total billing amount
 
Algorithm:
  -Determine if customer income is below the income limit
  -Calculate the bill based on incomelimit, consultTime, and hrRate
  -Return bill
 
Pseudocode: 
 IF(inocme <=incomeLimit)
    IF(consultTime <=30)
      bill = 0;
    ELSE
      bill =(consultTime-30)*.40)
 IF (income >25000)
    IF(consultTime <=20)
      bill = 0;
     ELSE
       bill =((consultTime-20)*.70)
 Return bill
 
 
 
 
================
Program testing:
================
income = 10000, consultTime=30, hrRate=50
 ====> bill=0.00
income = 25000, consultTime=35, hrRate=50
 ====> bill=2.00
income = 25001, consultTime=35, hrRate=50
 ====> bill=10.50
