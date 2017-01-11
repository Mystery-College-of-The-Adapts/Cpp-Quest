/*
* returnMystery1.cpp
* Created by: qubit
* Nov 20, 2016
* 9:09:39 PM
*/

#include <iostream>

using namespace std;
// Function Prototype

int mystery(int b, int c){
	return c + 2 * b;
}

int main(){
	int a = 4;
	int b = 2;
	int c = 5;

	a = mystery(c, b);
	c = mystery(b, a);

	cout << a << " " << b << " " << c <<endl;

	return 0;
}
