Problem:
 Write a program that allows the user to enter the last names of five candidates in a local election and the number of votes received by each candidate. The program should then output each candidate’s name, the number of votes received, and the percentage of the total votes received by the candidate. Your program should also output the winner of the election. A sample output is:
 
 
 Candidate     Votes Received     % of Total Votes
 Johnson            5000               25.91
 Miller             4000               20.73
 Duffy              6000               31.09
 Robinson           2500               12.95
 Ashtony            1800               9.33
 Total              19300
 
Analysis:
 Display Candiates, Votes Received and % of Total votes
 The program will declare arrays for names and votes.
 Prompt the user for the array size then create array
 Input data then display result with candidate, votes, and percentage
 
Algorithm:
    - Declare variables and dynamic arrays
    - Input array size and create array
    - Create string arrays to hold names and votes
    - Input data: Name and amount of votes
    - Calculate percentage
    - Display results
 
Preconditions:
 Program Input:
    Number of candiates
    Candidate name
    Number of votes
 Program Output:
    Candiates
    Votes
    % of total votes
    Winner of election
 
 
 
**********
 TESTING
**********
>2 => John ==> 20 ===> Sarah ====> 40
 Output: 
Candidate       Votes      % of total votes
 John              20          33.33
 Sarah             40          66.67
 Total:            60
 The winner of the Election is: Sarah
 
>2 => Phil ==> 8024 ===> Heather ====> 3945
 Output:
Candidate       Votes      % of total votes
 Phil            8024          67.04
 Heather         3945          32.96
 The winner of the Election is: Phil
 