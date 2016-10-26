/*
* Input_Output.cpp
* Created by: Anderson
* Oct 25, 2016
* 7:36:12 PM
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// Function Prototype

int main(){

	// To do Place your code here

	ifstream input("myFile.txt");    // Read from myFile.txt
    string str;
    getline(input, str);    // Save the read content into str string variable
    
    cout << "Read from myFile.txt:" << str <<endl;

    if (!input.is_open()){
        cerr << "Couldn't open the file myFile.txt"<<endl;
    }

    ofstream output("myFile.txt");      // Write to myFile.txt
    output << "Hello World!" <<endl;

	return 0;
}
