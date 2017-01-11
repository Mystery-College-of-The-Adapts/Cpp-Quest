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


void PrintTableHeader(){
	/* Print the --...--+- pattern for all but last column. */
	for (int column = 0; column < NUM_COLUMNS - 1; ++column)
		cout << setfill('-') << setw(COLUMN_WIDTH) << "" <<"-+-";


	/* Now print the ---...--- pattern for the last column and a newline.. */
	cout << setw(COLUMN_WIDTH) << "" << setfill(' ') << endl;
}

void PrintTableBody() {

   ifstream input;
   input.open("table.dat");

   if(!input.is_open()){
      cerr << "File not open! Try Again"<<endl;
    }



	int intValue;
	double doubleValue;
	// Loop over the lines in the file reading data.
   	int rowNumber = 0;
	while(input >> intValue >> doubleValue ){

		// Process Data 
		cout << setw(COLUMN_WIDTH) << (rowNumber + 1) << " | ";
	    cout << setw(COLUMN_WIDTH) << intValue << " | ";
	    cout << setw(COLUMN_WIDTH) << doubleValue << endl;

		rowNumber ++;

	}
	      
	          


    } 

int main(){
    PrintTableHeader();
    PrintTableBody();



    return 0;
}
