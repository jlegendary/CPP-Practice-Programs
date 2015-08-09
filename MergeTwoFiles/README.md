 Problem:
   W As an example, if two input files contain
   student names and grades for a particular class ordered 
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
     Read a line from each data file
     While the end of both files has not been reached
        If the line from file 1 is smaller than the line from file 2
           Write the line from file 1 to the output file and read
           a new line from file 1.
        Else
           Write the line from file 2 to the output file and read
           a new line from file 2.
     Write the remaining lines (if any) from file 1 to the output file.
     Write the remaining lines (if any) from file 2 to the output file.
  Read one line at a time
     using: inFile >>
  Write the to output file:
     using: outFile <<
  Close file
     using: inFile1.close();
            inFile2.close();
            outFile.close();
 
 
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
