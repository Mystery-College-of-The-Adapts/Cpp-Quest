/*
* main.cpp
* Created by: Anderson
* Nov 18, 2016
* 10:46:58 AM
*/

#include <iostream>
#include <string>

using namespace std;
// Function Prototype


/***************** Enum Data Types*****************/
/*
enum directionT {
			North,
			East,
			South,
			West
		};

enum colorT {
			Red,
			Green,
			Blue,
			Yellow,
			Cyan,
			Magenta
		};


string colorName(colorT a);

string colorName(colorT a){
	switch(a) {
	case Red: return "Red";
	case Blue: return "Blue";
	default: return "Awesome color";
	}
}
*/
/****************************************************/


/*********************** Records**********************/

struct employeeRecordT {
	string name;
	string title;
	string ssnum;
	double salary;
	int withholding;
};



int main(){

	//colorT a = Red;

	//cout << colorName(a);

/******************************* Pointers ********************************/
	/*int x = 2;
	int *p;

	p = &x;   // *p = 2

	cout << *p <<" at address: " << &p <<endl;

	*p = 17;   // changes x to 17

	cout << *p <<" at address: " << &p <<endl;
	cout << x <<endl;   //

*/


/************************************* arrays*************************/
/*

	int arr [] = {25,15,147,186};

	// Prints the size of an array
	cout << sizeof arr / sizeof arr[0] << endl;


	// Arrays and Pointers
	arr[1] = 5;

	cout << arr[1]<<endl;
*/

/********************************* Records ***************************/

	employeeRecordT emp;

	emp.name = "Ebenezer";
	emp.title = "Partner";
	emp.ssnum = "278-85-8689";
	emp.salary = 250.00;
	emp.withholding = 1;


	employeeRecordT *empPtr = new employeeRecordT;
	empPtr = &emp;

	cout << empPtr->salary <<endl;

	empPtr->name = "Eric S.";

	return 0;

}
