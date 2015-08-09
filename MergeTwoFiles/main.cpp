//
//  main.cpp
//
//  Created by JLegendary on 8/9/15.
//  Copyright (c) 2015 JLegendary. All rights reserved.
//


#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream inFile1;
    ifstream inFile2;
    ofstream outFile;
    
    string temp1;
    string temp2;
    char g;
    char f;
    
    // Open file 1 and file 2
    inFile1.open("file1.txt");
    inFile2.open("file2.txt");
    
    // Open output file
    outFile.open("output.txt");
    
    // If unable to open
    if (!inFile1 || !inFile2)
    {
        cout << "Can't open file."
        << "/n Program terminated!" << endl;
        return 1;
    }
    
    //Merge algorithm
    inFile1 >> temp1 >> g;                         // Read a line from file 1
    inFile2 >> temp2 >> f;                         // Read a line from file 2
    
    while (!inFile1.eof() && !inFile2.eof())       // While the end of both files has not bee reached
    {
        if (temp1 < temp2)                         // If the line from file 1 is smaller than file2
        {
            outFile << temp1 << ' ' << g << endl;  // Write the line from file 1 to output file
            inFile1 >> temp1 >> g;                 // and read a new line from file1
        }
        else
        {
            outFile << temp2 << ' ' << f << endl;  // Write the line from file2 to the output file
            inFile2 >> temp2 >> f;                 // and read a new line from file2
        }
    }
    outFile << temp1 << ' ' << g << endl;          // Write the remaining line from file1, Jones D
    inFile1 >> temp1 >> g;                         // Read next one, King B
    outFile << temp1 << ' ' << g << endl;          // Write the last one, King B
    
    // Close files
    inFile1.close();
    inFile2.close();
    outFile.close();
    
    return 0;
    
}
