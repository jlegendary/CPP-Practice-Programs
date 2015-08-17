Problem:
 Jason opened a coffee shop at the beach and sells coffee in three sizes: small (9oz), medium (12oz), and large (15oz). The cost of one small cup is $1.75, one medium cup is $1.90, and one large cup is $2.00. Write a menu-driven program that will make the coffee shop operational. 
 
 Buy coffee in any size and in any number of cups.
 At any time show the total number of cups of each size sold.
 At any time show the total amount of coffee sold.
 At any time show the total money made.
 Complete the analysis and design started below, implement the design, compile and test your code, and turn in your completed analysis and design, and your source code.
 

Analysis:
 The program is intended to provide information about the coffee shop over a number of hours. When an order is placed, the customer should be asked what size of coffee is needed and how many cups of each chosen size. The customer should then be presented with a bill for that transaction. Each time an order is placed, the number of cups of each size sold needs to be accumulated so it can be used to calculate the total number of cups of each size sold, the total amount of coffee sold, and the total amount of money made when a request for one of those quantities is made.

  - Break down the function into 5 parts: menu, buyCoffee, cupsSold, coffeeSold, and moneyMade
 - Run the menu function and call up the 4 other functions or quit
 
 

Algorithm:
 Show Menu:
 Buy coffee (buyCoffee)
 Show cups sold (cupsSold)
 Show coffee sold (coffeeSold)
 Show money made (moneyMade)
 Quit
 Get menu selection
 If (selection is not "Quit")
 process selection
 show menu again
 
 
 
 ===================
 menu function:
 ===================
Summary:
 - Display the choices of buying coffee, showing cups of coffee sold, showing number of coffee sold, and showing total money made.
 
Algorithm:
  -Set preicions to 2 decimal points
  -Set up menu from 1-5
  -Set up switch menu to call buyCoffee, cupsSold, coffeeSold, and moneyMade.

Testing:
  1.
 ====> Goes to buy coffee function
  2.
 ====> Shows the cups of coffee sold
  3. 
 ====> Shows coffee sold in ounces
  4. 
 ====> Shows total money made
  5.
 ====> Quits the program
 
 
 
 ===================
 buyCoffee function:
 ===================
Summary:
 - Allows customer to place an order and displays a bill showing how many cups in each size the customer purchased
 
Algorithm:
 - Show coffee size choices
 - Make switch for 3 different sizes
 - case 1 small coffee, case 2 medium coffee, case 3 large coffee
 - make plural if more than 1 coffee
 - for each sale, add money to netMade, and add up total number of cups sold.
 
Testing:
 1.
 =====> Goes to small =====> Chose 1 cups =====> shows price for 1 small coffee =====> $1.75
 2.
 =====> Goes to medium ====> Chose 3 cups =====> shows price for 3 medium coffees ===> $5.70 
 3.
 =====> Goes to large =====> Chose 5 cups =====> shows price for 5 large coffees ====> $10.00
 
 
 
 
 ====================
 cupsSold function:
 ====================
 Summary:
  - Calculates and displays the total number of cups of coffee in each size that had been sold so far
 
 Algorithm:
  - Show total number of cup of coffee sold in small, medium, and large
  
 Output:
  - smallSold: Total number of small cups sold
  - mediumSold: Total number of medium cups sold
  - largeSold: Total number of large cups sold
 
 Testing:
 *Continuation from buyCoffee 1. function testing*
 =====> 1 small cup sold
 *Continutation from buyCoffee 2. function testing*
 =====> 1 small cup sold
 =====> 3 medium cups sold
 *Continutation from buyCoffee 3. function testing*
 =====> 1 small cup sold
 =====> 3 medium cups sold
 =====> 5 large cups sold
 
 
 
 
 ====================
 coffeeSold function:
 ====================
 Summary:
  - Calculates and displays the total amount of coffee sold(in oz) so far
 
 Equation:
  - set totalOz = (smallSold* smallSize) + (mediumSold*mediumSize) + (largeSold*largePrice)

 Output:
   - totalOz: total oz of coffee sold
 
 Testing:
 *Continuation from cupsSold 1. function testing*
 =====> 9
 *Continuation from cupsSold 2. function testing*
 =====> 45
 *Continuation from cupsSold 3. function testing*
 =====> 120
 
 
 
 
 ===================
 moneyMade function:
 ===================
 Summary:
   - Calculates and displays the total amount of money that had been made so far

 Equation:
   totalMoney: (smallSold*smallPrice) + (mediumSold*mediumPrice) + (largeSold*largePrice)
 
 Output:
    - totalMoney: total money made
 


 
 ============
 Testing: 
 ============
 *Continutation from coffeeSold 1. function testing*
 =====> $1.75
 *Continuation from coffeeSold 2. function testing*
 =====> $7.45
 *Continuation from coffeeSold 3. function testing*
 =====> $17.45
 