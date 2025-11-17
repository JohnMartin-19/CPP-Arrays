#include <iostream>
using namespace std;


void countdown(int n){
    if(n > 0){
        cout << n << " ";
        countdown(n-1);
    }
}

int factorial(int k){
    if(k > 0){
       return k * factorial(k -1);
    }else {
        return 1;
    }
}

int main(){
    countdown(10);
    cout << "\nFactorial of 5 is " <<factorial(5);
    return 0;
}