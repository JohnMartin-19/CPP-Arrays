#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string *ptr = &food;

    cout << food << '\n';
    cout << ptr << '\n'; // returns the memory address of food
    cout << *ptr << '\n'; // returns the value of the pointer which is the value of food - Pizza

    *ptr = "Hamburger";

    cout << *ptr << '\n';
    cout << food << '\n';

}