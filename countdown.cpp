#include <iostream>
using namespace std;


void countdown(int n){
    if(n > 0){
        cout << n << " ";
        countdown(n-1);
    }
}

int main(){
    countdown(10);
    return 0;
}