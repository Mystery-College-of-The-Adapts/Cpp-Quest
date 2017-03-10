#include <iostream>
#include <fstream>      // exports the ifstream and ofstream types, streams that perform file I/O.
#include <string>

using namespace std;

int main() {
	cout << "I'm sorry Dave, I'm afraid I can't do that." << endl;
	cout << "######################################################" << endl << endl;

	/*##################################################################################*/

	/* Write data of multiple types to stream objects */

	cout << "Streams can take in text." << endl;
	cout << 137 << endl;      // Streams can take in integers.
	cout << 2.71828 << endl;  // Streams can take in real numbers.
	cout << "Here is text followed by a number: " << 31415 << endl;
	cout << "######################################################" << endl << endl;

	/*##################################################################################*/

	/* Stream Extraction Operator >> */
	cout << "Please enter an integer: " << endl;
	int myInteger;
	//cin >> myInteger;   // value stored in myInteger
	cout << "######################################################" << endl << endl;

    /*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

	/* Reading and Writing Files */

	ifstream input("myFile.txt"); // Read from myFile.txt
	string str;
	getline(input, str); // Save the read content into str

	cout << "Read from myFile.txt: " << str << endl;
	cout << "######################################################" << endl << endl;

	/*######################################################################*/
	ifstream capitals;
	capitals.open("world-capitals.txt");

	if (!capitals.is_open()) {
		cerr << "File not open! Try Again " << endl;
	}

	string country;
	string capital;

	while (getline(capitals, capital) && getline(capitals, country)) {
		cout << capital << " is the capital city of: " << country << endl;
	}





	cin.get();
	return 0;
}