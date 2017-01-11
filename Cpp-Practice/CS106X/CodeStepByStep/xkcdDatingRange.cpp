/*
* xkcdDatingRange.cpp
* Created by: qubit
* Nov 20, 2016
* 8:46:31 PM
*/

#include <iostream>

using namespace std;
// Function Prototype

void xkcdDatingRange(int, int &, int &);

void xkcdDatingRange(int age, int &min, int &max){

	min = (age/2) + 7;
	max = (age - 7) * 2;
}

int main(){

// To do Place your code here
 int min = 0;
 int max = 0;
 xkcdDatingRange(18, min, max);

 cout <<"min: "<< min <<", " <<"max: "<< max <<endl;

return 0;
}
