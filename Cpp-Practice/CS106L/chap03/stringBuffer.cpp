/*
* stringBuffer.cpp
* Created by: Anderson
* Nov 17, 2016
* 12:22:19 PM
*/

#include <iostream>
#include <sstream>
#include <string>


using namespace std;
// Function Prototype

string GetLine(string prompt){
	cout << prompt;
	string line;
	getline(cin, line);
	return line;
}

string IntegerToString(int n){
	ostringstream stream;
	stream << n;
	return stream.str();
}

int GetInteger(string prompt){
	int value;

	while(true){
		cout << prompt;
		string line;
		getline(cin, line);
		istringstream stream(line);
		if (stream >> value){
			char c;
			stream >> c;
			if (!stream){
				return value;
			}
		}

		cout << "Please enter a valid integer."<<endl;
	}
	return value;
}


int main(){

    /*stringstream myConverter;
    int myInt;
    string myString;
    double myDouble;
    myConverter << " 137 Hello 2.712828";
    myConverter >> myInt >> myString >> myDouble;
    cout << myConverter.str() <<endl;
    cout << myInt <<endl;
    cout << myString <<endl;
   */

    string name = GetLine("what's your name?: ");
    int age = GetInteger("How old are you?: ");
    string both = name + " " + IntegerToString(age);
    cout << both << endl;



    return 0;
}
