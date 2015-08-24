//
//  main.cpp
//   Federal Tax Calculator
//
//  Created by JLegendary on 8/24/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <iostream>    //Input and output

void getInfo(int &numPerson, int &salary, int &standardExemption, int &pretaxSavings);
int taxAmount(int numPerson, int salary, int standardExemption,
              int pretaxSavings, int &taxableIncome, int &baseTax, int &marginTax);


// Main function
int main ()
{
    int numPerson, salary, standardExemption, pretaxSavings, taxableIncome, baseTax, marginTax;
    int totalTax;
    
    //get getInfo
    getInfo(numPerson, salary, standardExemption, pretaxSavings);
    //get taxableIncome, baaseTax, marginTax, and totalTax.
    totalTax = taxAmount(numPerson, salary, standardExemption, pretaxSavings, taxableIncome, baseTax, marginTax);
    
    // Output adjusted income
    std::cout << "\n\n\nAdjusted income: $" << taxableIncome << std::endl;
    // Output base tax
    std::cout << "Base tax: $" << baseTax << std::endl;
    // Output additional tax
    std::cout << "Addtional tax: $" << marginTax << std::endl;
    // Output total tax owed
    std::cout << "Total tax owed: $" << totalTax << std::endl;

    return 0;
}

// Gets the input and stores them
void getInfo(int &numPerson, int &salary, int &standardExemption, int &pretaxSavings)
{
    char maritalStatus, answer, rAnswer;
    int numChildren;
    int pensionPlan;
 
    // Ask if single or married
    std::cout << "What is your marital status?" << std::endl;
    std::cout << "\tM for Married and S for Single: \n";
    std::cout << "=====> ";
    std::cin >> maritalStatus;
    std::cout << std::endl;
    
        // If married, standard exemption is 7000, and asks for kids
        if  (maritalStatus == 'm' || maritalStatus == 'M')
        {
            std::cout << "Please enter number of Children: " << std::endl;
            std::cout << "\tMust be under the age of 14"<< std::endl;
            std::cout << "=====> ";
            std::cin >> numChildren;
            std::cout << std::endl;
        
            // stanardExemption for married couple
            standardExemption = 7000;
        
            // If both earn income, then combine income.
            std::cout << "Do both spouses earn income?" << std::endl;
            std::cout << "\tY or y for Yes" << std::endl;
            std::cout << "\tAny other key for No : "<< std::endl;
            std::cout << "====> ";
            std::cin >> answer;
            std::cout << std::endl;
                // Enter combined salary:
                if (answer == 'y' || answer == 'Y' )
                {
                    std::cout << "\tYour combined salary is: $" << std::endl;
                    std::cout << "=====> $";
                    std::cin >> salary;
                    std::cout << std::endl;
                }
            // Enter just your salary
                else
                {
                    std::cout << "Enter your salary: " << std::endl;
                    std::cout << "=====> $";
                    std::cin >> salary;
                    std::cout << std::endl;

                }
                // Personal Exemption equals couple plus the number of children
                numPerson = 2 + numChildren;
            
        // Retirement contribution for married couple
        std::cout << "Did you contribute to your retirement account?" << std::endl;
        std::cout << "\tEnter y or Y, for Yes" << std::endl;
        std::cout << "\tAnything else for No." << std::endl;
        std::cout << "=====> ";
        std::cin >> rAnswer;
            // If answer is yes, put the percentage up to 6%
            if (rAnswer == 'y' || rAnswer == 'Y')
            {
                std::cout << "\nEnter the percentage you put into the pension plan: " << std::endl;
                std::cout << "\t6% is max" << std::endl;
                std::cout << "=====> ";
                std::cin >> pensionPlan;
                // If above 0 and below 6% contributed
                if (pensionPlan >0 && pensionPlan <=6)
                {
                    pretaxSavings  = pensionPlan * salary/100;
                    // Output pretax Savings from pension contribution
                    std::cout << "\tPre-tax saving from retirement account: $" << pretaxSavings << std::endl;
                }
                // If entered something beside 1 through 6
                else
                {
                    std::cout << "\tPlease put int 1-6%" << std::endl;
                    std::cin >>pensionPlan;
                    pretaxSavings  = pensionPlan * salary/100;
                    std::cout << "\tPre-tax saving from retirement account: " << pretaxSavings << std::endl;
                }
            }
            // If answer is no, didn't contribute to retirement
            else
            {
                std::cout << "You didn't contribute to your retirement account." << std::endl;
                pensionPlan = 0;
                pretaxSavings  = pensionPlan * salary/100;
                std::cout << "Pre-tax saving from retirement account: " << pretaxSavings << std::endl;
            }
        
        
    }
    
    // Single
    else
    {
        // Input salary
        std::cout << "Enter your salary: $";
        std::cin >> salary;
        std::cout << std::endl;
        standardExemption = 4000;
        numPerson = 1;
    
        // Asks if contributed to retirement account
        std::cout << "Did you contribute to your retirement account?" << std::endl;
        std::cout << "\tType y or Y, for Yes" << std::endl;
        std::cout << "\tAnything else for No." << std::endl;
        std::cout << "=====> ";
        std::cin >> rAnswer;
        // if Yes
        if (rAnswer == 'y' || rAnswer == 'Y')
        {
            std::cout << "\nEnter the percentage you put into the pension plan: \n";
            std::cout << "\t6% is max" << std::endl;
            std::cout << "=====> " << std::endl;
            std::cin >> pensionPlan;
            if (pensionPlan >0 && pensionPlan <=6)
            {
                pretaxSavings  = pensionPlan * salary/100;
                std::cout << "\tPre-tax saving from retirement account: $" << pretaxSavings << std::endl;
            }
            else
            {
                std::cout << "\tPlease put int 1-6%" << std::endl;
                std::cout << "=====> ";
                std::cin >>pensionPlan;
                pretaxSavings  = pensionPlan * salary/100;
                std::cout << "\tPre-tax saving from retirement account: $" << pretaxSavings << std::endl;
            }
        }
        // if No
        else
        {
            std::cout << "\tYou didn't contribute to your retirement account." << std::endl;
            pensionPlan = 0;
            pretaxSavings  = pensionPlan * salary/100;
            std::cout << "\tPre-tax saving from retirement account: $" << pretaxSavings << std::endl;
        }
    }
}


// Calculate taxes owed
int taxAmount(int numPerson, int salary, int standardExemption, int pretaxSavings, int &taxableIncome, int &baseTax, int &marginTax)
{
    int marginalIncome;
    int totalTax;
    
    // Taxable income
    taxableIncome = salary - (1500 * numPerson) - standardExemption - pretaxSavings;
    
    // Bracket 1
    if (taxableIncome >= (0) && taxableIncome <= 15000)
    {
        baseTax =.15 * taxableIncome;
        marginTax = 0;
        totalTax = baseTax+marginTax;
    }
    
    // Bracket 2
    else if (taxableIncome >= (15001) && taxableIncome <= 40000)
    {
        marginalIncome = taxableIncome - 15000;
        marginTax = .25 * marginalIncome;
        baseTax = 2250;
        totalTax = baseTax+marginTax;
    }
    
    // Bracket 3
    else if (taxableIncome > (40000))
    {
        marginalIncome = taxableIncome - 40000;
        marginTax = .35 * taxableIncome;
        baseTax = 8460;
        totalTax = baseTax + marginTax;
    }
    // Returns the total tax owed
    return totalTax;
}












