Problem:
  Write a program that can be used to calculate the federal tax. The tax is calculated as follows: For single people, the standard exemption is $4,000; for married people, the standard exemption is $7,000. A person can also put up to 6% of his or her gross income in a pension plan. The tax rates are as follows: 

  If the taxable income is:
  Between $0 and $15,000, the tax rate is 15%.
  Between $15,001 and $40,000, the tax is $2,250 plus 25% of the taxable income over $15,000.
  Over $40,000, the tax is $8,460 plus 35% of the taxable income over $40,000.
  Prompt the user to enter the following information:
 
  Marital status:
  If the marital status is ‘‘married,’’ ask for the number of children under the age of 14
  Gross salary (If the marital status is ‘‘married’’ and both spouses have income, enter the combined salary.)
  Percentage of gross income contributed to a pension fund
  To calculate the taxable income, subtract the sum of the standard exemption, the amount contributed to a pension plan, and the personal exemption, which is $1,500 per person. (Note that if a married couple has two children under the age of 14, then the personal exemption is $1,500 * 4 = $6,000.). Display the adjusted income, base tax, additional tax, and tax amount owed.
 
 Analysis:

 Base tax
 
 Bracket 1 (up to $15000) = income * .15
 Bracket 2 (between $15001 and $40000) = 2,250 + (income - 15000) * .25
 Bracket 3 (> $40000) = 8460 + (income - 40000) * .35
 Deductions
 
 Standard exemption, single = $4000
 Standard exemption, married = $7000
 Personal exemption = $1500
 Retirement savings up to (income * .06)


 
 Marital Status	# Children	% pre-tax savings	Gross Salary	Standard Exemption	Personal Exemption	Retirement Savings	Adusted Income	Base Tax	Additional Tax	Taxes Owed
 S	0	0	15000	4000	1500	0	9500	1425	 	1425
 S	0	6	15000	4000	1500	900	8600	1290	 	1290
 M	0	0	15000	7000	3000	0	5000	750	 	750
 M	2	0	15000	7000	6000	0	2000	300	 	300
 M	0	6	15000	7000	3000	900	4100	615	 	615
 M	2	6	15000	7000	6000	900	1100	165	 	165
 S	0	0	30000	4000	1500	0	24500	2250	2375	4625
 S	0	6	30000	4000	1500	1800	22700	2250	1925	4175
 M	0	0	30000	7000	3000	0	20000	2250	1250	3500
 M	2	0	30000	7000	6000	0	17000	2250	500	2750
 M	0	6	30000	7000	3000	1800	18200	2250	800	3050
 M	2	6	30000	7000	6000	1800	15200	2250	50	2300
 S	0	0	50000	4000	1500	0	44500	8460	1575	10035
 S	0	6	50000	4000	1500	3000	41500	8460	525	8985
 M	0	0	50000	7000	3000	0	40000	2250	6250	8500
 M	2	0	50000	7000	6000	0	37000	2250	5500	7750
 M	0	6	50000	7000	3000	3000	37000	2250	5500	7750
 M	2	6	50000	7000	6000	3000	34000	2250	4750	7000



 Algorithm
  -Get taxpayer information (getInfo)
  -Calculate taxes owed (calcTax)
  -Display taxes owed information (showTax)




===============
 Main function:
=============== 
 Summary:
    - Calls getInfo and calls totalTax to bring taxableIncome, baseTax, marginTax, and totalTax
 Program:
   Output:
    taxableIncome: adjusted taxable income
    baseTax: based tax
    marginTax: marginal tax, tax beside based
    totalTax: total tax owed
 
 
 
 
=======================================================================================
 void getInfo(int &numPerson, int &salary, int &standardExemption, int &pretaxSavings):
 ======================================================================================
 Summary:
    - Asks the question of:    
        - Married or single
        - How many kids, if married
        - Income
        - Contribution to retirement account percentage
Preconditions:
  Program input:
    martialStatus: Married or Single
    numChildren: Number of children
    salary: total amount of salary
    pensionPlan: contribution to retirment account in percent

Postconditions:
  Output parameter: 
    numPerson: Amount of personal exemption
    salary: total salary
    standardExemption: standard exemption 4000 for single, 7000 for married
    pretaxSavings: amount of retirement savings
 
 
 Program Output:
    pretaxSavings: amount of retirement savings
 
 
 =============================================================================
 int taxAmount(int taxAmount(int numPerson, int salary, int standardExemption,
 int pretaxSavings, int &taxableIncome, int &baseTax, int &marginTax):
 =============================================================================
 Summary:
    - It calculate the adjusted income, based tax, additional tax, and gives the total taxes owed
PreConditions:
 Input Parameter:
    -numPerson: personalExemption
    -salary: total salary
    -standardExemption: 4000 for single, 7000 for married
    -pretaxSavings: Tax saving from retirement account
 
PostConditions:
  Output Parameter:
     -adjusted income: Taxable income
     -based tax: Based tax based on bracket
     -additional tax: additional tax
 
 Returns
    -totalTax: taxe owed
 
 
 
 
 
 *****************
 PROGRAM TESTING:
 *****************
 > s => 30000 ==> n
 Adjusted income: $24500, base tax: $2250, additional tax: $2375, total tax owed: $4625
 
 > s => 15000 ==> y ===> 6
 Adjusted income: $8600, base tax: $1290, additional tax: $0, total tax owed: $1290

 > m => 2 ==> y ===> 15000 ====> y =====> 6
 Adjusted income: $1100, base tax: $165, additional tax: $0, total tax owed: $165
 
 > m => 2 ==> y ====> 50000 =====> y ======> 6
 Adjusted income: $34000, base tax: $2250, additional tax: $4750, total tax owed: $7000

 