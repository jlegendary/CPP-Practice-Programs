 Problem:
   Merge two input files into one output file.
   Student names and grades for a particular class ordered 
   by name, merge the information as shown below.
 
    File 1         File 2         Output File
    Adams C        Barnes A       Adams C
    Jones D        Johnson C      Barnes A
    King B                        Johnson C
                                  Johnes D
                                  King B
 
 
 Anlysis:
   Since there is two files, name them file 1 and file 2, and name the output file.
   Given two input files, merge into one output file using merge algorithm:
     
 
 
 Algorthm:
    - Open file 1 and file 2
    - Open output file
    - Read one line at a time
    - Display message if unable to open
    - Read a line from each file
    - While end of file has not be reached
    - Use Merge algorithm
    - Print to output the rest of the remaining line, if any
    - Close file
 
 
 Program:
   Input:file1.txt, file 2.txt
   Output: outputfile.txt
