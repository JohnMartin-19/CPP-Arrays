#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string * ptr = &food;

    cout << ptr <<'\n';
    cout << food << '\n';
}