/*
* parameterMysteryBCA.cpp
* Created by: Anderson
* Nov 20, 2016
* 8:15:02 PM
*/

#include <iostream>

using namespace std;
// Function Prototype
void mys(int &b, int c, int &a){

	cout <<"2....***********************"<<endl;

	cout << "a: " << a <<endl;
	cout << "b: " << b <<endl;
	cout << "c: " << c <<endl;

	a++;
	b--;
	c += a;


	cout <<"3.....***********************"<<endl;
	cout << "a: " << a <<endl;
	cout << "b: " << b <<endl;
	cout << "c: " << c <<endl;

	cout <<"4....***********************"<<endl;

}

int main(){

// To do Place your code here
	int a = 5;
	int b = 2;
	int c = 8;
	cout <<"1....***********************"<<endl;
	cout << "a: " << a <<endl;
	cout << "b: " << b <<endl;
	cout << "c: " << c <<endl<<endl;



	mys(c, a, b);
	cout << "a: " << a <<endl;
	cout << "b: " << b <<endl;
	cout << "c: " << c <<endl;


return 0;
}
