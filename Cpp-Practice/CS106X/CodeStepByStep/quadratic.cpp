/*
* quadratic.cpp
* Created by: Anderson
* Nov 20, 2016
* 8:59:55 PM
*/

#include <iostream>
#include <cmath>

using namespace std;
// Function Prototype

void quadratic(int, int, int, double &, double &);


void quadratic(int a, int b, int c, double &root1, double &root2){
    double delta;
    delta = sqrt(b*b - (4*a*c));
    root1 = (-b+delta) / (2*a);
    root2 = (-b-delta) / (2*a);

}
int main(){



	//  x2 - 3x - 4 = 0

	int a = 1;
	int b = -3;
	int c = -4;

	double root1, root2;

	quadratic(a, b, c, root1, root2);

	cout <<"root1: "<<root1 <<endl;
	cout <<"root2: "<<root2 <<endl;


return 0;
}
