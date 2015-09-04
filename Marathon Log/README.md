Problem:
 Jason, Samantha, Ravi, Sheila, and Ankit are preparing for an upcoming marathon. Each day of the week, they run a certain number of miles and write them into a notebook. At the end of the week, they would like to know the number of miles run each day, the total miles for the week, and average miles run each day. Write a program to help them analyze their data. Your program must contain parallel arrays: an array to store the names of the runners and a two-dimensional array of five rows and seven columns to store the number of miles run by each runner each day. Furthermore, your program must contain at least the following functions: a function to read and store the runners’ names and the numbers of miles run each day; a function to find the total miles run by each runner and the average number of miles run each day; and a function to output the results. The input data is stored in a file which is attached (marathon.txt) and each line of data contains the name of the runner and the number of days he/she ran that week (each runner ran every day of the week).  
 
  
Analysis:  
 Create an array to hold name, and two arrays to hold miles, and one array for average
 In main function, I will initialize array and call function.
 In getData function, I will read from file marathon.txt
 In getAverage funciton, I wll get average mile per runner and store it in average array
 In printOutput function, I will output name, miles ran in a week, and average.
 
 
 Algorithm:
   - set arrays
   - call functions
 

==========================================
void getData(string names[],int mile[][7])
==========================================
Reads the name, and miles ran off the marathon file and stores it in memory in array.
Name array for names
Mile array for miles in two dimension

Precondition:
    - Datafile has been provided
    - getData is being called from main function

Program Input:
    marathon.txt
    - the file includes name, miles ran
 
Input Parameter:
    name: name of the person
    miles: 7 different miles ran in a week
Postcondition:
    name will be outputed into name array
    mile will be outputed into mile arrays
 
Program output:
    name array and two miles arrays
 
 
 
 
=========================================
 void getAvg(int mile[][7],int avg[])
=========================================
 For five people, enter 7 different miles per person into an array 
 Averages the miles into average array
 
Preconditions:  
 Input Parameters  
    miles array: miles put into two arrays  
  
Postconditions:  
 Output Parameters  
    avg array: average array  
 
 
 
========================================================
void printOutput(string names[],int mile[][7],int avg[])
========================================================
Output name array
Output mile array
Output average array
 
 
Preconditions:  
    Input Parameters  
        name array, mile arrays, average array
Postconditions:  
    Output Parameters:  
        name in name array  
        miles in miles arrays  
        average in average array 
 
 
 
 
 
**********
 Testing
**********  
 -Opens files  
 -Outputs the name  
 -Name is correct  
 -Outputs the miles   
 -Miles are correct  
 -Outputs the average  
 -Average is correct
 

