/*
* BMI.cpp
* Created by: Anderson
* Nov 20, 2016
* 9:13:49 PM
*/

#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;
// Function Prototype

float BMICalc(float height, float weight){
	float BMI;
	BMI = (weight / (height * height)) * 703.0;

	return BMI;
}

void Classify(float BMI){
	if (BMI < 18.5) printf ("BMI = %0.4f, class 1", BMI);
	else if (BMI >= 18.5 && BMI <= 24.9) printf ("BMI = %0.4f, class 2", BMI);
	else if (BMI >= 25.0 && BMI <= 29.9) printf ("BMI = %0.4f, class 3", BMI);
	else printf ("BMI = %0.4f, class 4", BMI);
}

int main(){

	float height;
	float weight;
	float BMI1, BMI2;

	cout <<"This program reads data for two people"<<endl;
	cout <<"and computes their body  mass index (BMI)."<<endl<<endl;

	cout <<"Enter Person 1's information:"<<endl;
	cout <<"height (in inches)? ";
	cin >> height;
	cout <<"weight (in pounds)? ";
	cin >> weight;

	BMI1 = BMICalc(height, weight);
	Classify(BMI1);
	cout << endl <<endl;

	cout <<"Enter Person 2's information:"<<endl;
	cout <<"height (in inches)? ";
	cin >> height;
	cout <<"weight (in pounds)? ";
	cin >> weight;

	BMI2 = BMICalc(height, weight);
	Classify(BMI2);

	cout << endl <<endl;

	cout<<"BMI difference = "<< abs(BMI1 - BMI2)<<endl;



	return 0;


}
