#include <iostream>
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
	cin >> myInteger;   // value stored in myInteger




	cin.get();
	return 0;
}