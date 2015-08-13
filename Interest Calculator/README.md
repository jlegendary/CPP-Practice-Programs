Problem:
  When you borrow  money to buy a house, a car, or for  some  other purposes, then you typically repay it by making periodic payments. Suppose that the loan amount is L, r is the interest rate per year, m is the number of payments in a year, and the loan is for t years.
 
  Write a program that prompts the user to input the values of L, r, m, t, and k.
  The program then outputs the appropriate values. 

 
 
 Analysis:
   Prompt user to input L, r, m, t, and k.  
   Let user choose periodic payment or unpaid balance after k payments
     Periodic payment:
        R = (Li / (1- (1+i)^(-mt)
     Unpaid Loan balance:
        L' = R[ (1-(1+i)^(-(mt-k)) / i]
          where R is the periodic payment. (Note that if the payments are monthly, then m = 12.)
     R is the periodic payment
     L is the loan amount
     r is the interest rate per year
     m is the number of payments per year
     t is the loan term in years
     i = (r/m) and r is in decimal.
 
 
 Program:
    Input:
        L, r, m, t, k
    Output:
        remainBalance = unpaid balance
        periodicPayment = periodic payments
   

 
 Algorithm:
    - Get loan term
    - Calculate periodic payment
    - Calculate unpaid balance
    - Display information

Pseudocode:
 Do
   loanInfo(L,r,m,t,k)
   SET i=r/m
   SET periodicPayment = calcPeriodicPayment(L,i,m,t,k)
   SET unpaidBalan= calcUnpaidBalan(periodicPayment,i,m,t,k)
   WRITE "The periodic payment: $" periodicPayment
   WRITE "The unpaid balance: $" unpaidBalan
   WRITE "For new loan information, type '1'"
   GET choice
 WHILE (choice == '1')
 
 
 
 =======================================================
 void loanInfo(double &L, double&r, int&m, int&t, int&k)
 =======================================================
 -Retrieve input from user and return by reference
 
 Preconditions
   Function input:
      L: initial loan amount
      r: interest rate in decimal form
      m: number of period per year
      t: length of loan in years
      k: number of payments made

 Pseudocode:
   WRITE "Enter the initial loan amount: " 
   GET L
   WRITE "Enter the interest rate: "
   GET r
   WRITE "Interest rate: " r/100 %
   WRITE "Enter the number of periods per year: "
   GET m
   WRITE "Enter the length of the loan in years: "
   GET t
   WRITE "Enter the number of payments already made: "
   GET k
 
 
 
 ===================================================================
 double calcPeriodicPayment(double L, double i, int m, int t, int k)
 ===================================================================
 - Calculate and return payment amount per period
  
 Preconditions:
    Function input:
      L: initial loan amount
      i: periodic interest rate (i=r/m)
      m: number of period per year
      t: length of loan in years
      k: number of payments made
 Postconditions:
    Function output: 
      periodicPayment: amount due each period
 
 Pseudocode:
   return (L*i) / (1 - pow((1 + i), (-m * t)))
  
 
 
 =============================================================================
 double calcUnpaidBalan(double periodicPayment, double i, int m, int t, int k)
 =============================================================================
 - Calculate and return unpaid loan balance after payment
 
 Preconditions:
    Function input:
      L: initial loan amount
      i: periodic interest rate
      m: number of period per year
      t: length of loan in years
      k: number of payments made
 Postconditions:
    Function output:
      periodicPayment: amount due each period
 
 Pseduocode:
   return (periodicPayment * ((1 - pow((1 + i), -(m*t - k))) / i))
 
  
 
 
 
 
 
 
*****************
 Program Testing:
*****************
 
 L= 1000, r=5, m=10, t=10, k=0
 ===> periodicPayment=500, unpaidBalance=1000
 
 L=1000, r=10, m=12, t=5, k=5
 ===> periodicPayment=833.33, unpaidBalance=1000
 
 L=1000, r=5, m=10, t=2, k=3
 ===> periodicPayment=500.15, unpaidBalance=999.29

 