#include <iostream>
#include <string>
using namespace std;

int main(){
    int numOfGuest;
    cout << "How many Guests?";
    cin >> numOfGuest ;

    if(numOfGuest < 0){
        cout<< "Number of guests must atleast be 1. \n";
        return 0;
    }

    string * guests = new string [numOfGuest];
    cin.ignore();

    for (int i = 0;i < numOfGuest; i++ ){
        cout << "Enter name of guest:" << (i+1) << '\n';
        getline(cin,guests[i]);
    }

    cout << "\nGuests checked in:\n";
    for (int i = 0;i< numOfGuest; i++){
        cout << guests[i] << '\n';
    }
    delete[]guests;
    return 0;
}