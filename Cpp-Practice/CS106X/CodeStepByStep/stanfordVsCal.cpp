#include <iostream>
using namespace std;


int main(){
    int score1, score2;
    cout << "Stanford: How many points did they score? ";
    cin >> score1;
    cout <<"Cal: How many points did they score? ";
    cin >> score2;
    
    if (score1 > score2){
        cout <<"Stanford won!";
    }
    else cout <<"Cal won!";


    return 0;
}