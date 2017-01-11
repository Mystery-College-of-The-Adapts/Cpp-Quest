/*
* getline.cpp
* Created by: Anderson
* Nov 16, 2016
* 8:33:09 PM
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// Function Prototype

int main(){

ifstream capitals;
capitals.open("world-capitals.txt");

if(!capitals.is_open()){
    cerr << "File not open! Try Again"<<endl;    
}

string country;
string capital;
while(getline(capitals, capital) && getline(capitals, country)){
    cout << capital << " is the capital of " << country << endl;
}


return 0;
}
