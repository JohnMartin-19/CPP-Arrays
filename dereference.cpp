#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string * ptr = &food;

    cout<< ptr << '\n';  // this returns the memory address of the variable food
    cout << *ptr << '\n'; // this returns the actual value of the pointer which is 'Pizza'
}