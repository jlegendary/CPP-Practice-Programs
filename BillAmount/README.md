 Problem:
   Suppose that billingAmount is a double variable, which
   denotes the amount you need to pay to the department 
   store.
   If you pay the full amount, you get $10.00 or 1% of the
   billingAmount, whichever is smaller, as a credit on  your
   next  bill; if  you  pay at least 50% of the 
   billingAmount, the penalty is 5% of the balance; if you 
   pay at least 20% of the billingAmount and less than 50% 
   of the billingAmount, the penalty is 10% of the balance; 
   otherwise, the penalty is 20% of the balance.
   Design an algorithm that prompts the user to enter the 
   billing amount and the desired payment. The algorithm 
   then calculates and outputs the credit or the remaining 
   balance. If the amount is not paid in full, the algorithm 
   should also output the penalty amount.
 
 Analysis:
  Set if loop for the following % of payment:
   If paid in full, get $10 or 1% of the billingAmount as credit:
     credit = billingAmount * 0.01
     or credit = 10
   If paid at least 50%, penalized 5% of the balance
     charge = billingAmount * 0.05
   If paid at least 20% and less than 50%, penalized 10% of the balance
     charge = billingAmount * 0.1
   Everything else is penalized 20% of the balance
     charge = billingAmount * 0.2
 
 Algorithm:
    - Get billingAmount and desirPay
    - Set if loop from the analysis
    - Display the charge/credit, balance, and final balance
 
 Program:
   Input:
     billingAmount: billing amount total
     desirPay: desired payment
   Output:
     charge or credit: charged penality or credited bonus
     balance: balance left after payment
     final balance: balance left after payment and after charged penality or credit
 
