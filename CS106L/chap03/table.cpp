/*
* table.cpp
* Created by: Anderson
* Oct 25, 2016
* 8:31:10 PM
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


// Constants to control table formatting

const int NUM_LINES = 4;
const int NUM_COLUMNS = 3;
const int COLUMN_WIDTH = 20;


void PrintTableBody() {
   ifstream input("table.txt");
    if(!input.is_open()){
        cerr << "File not open! Try Again"<<endl;
    }

    // Loop over the lines in the file reading data.
    for (int k = 0; k < NUM_LINES; k++){
        // Process Data

        int intValue;
        double doubleValue;
        input >> intValue >> doubleValue;

        cout << setw(COLUMN_WIDTH) << (k+1) << " | ";
        cout << setw(COLUMN_WIDTH) << intValue << " | ";
        cout << setw(COLUMN_WIDTH) << doubleValue << endl;
        
        

    } 
}
int main(){
    // PrintTableHeader();
    PrintTableBody();



    return 0;
}
