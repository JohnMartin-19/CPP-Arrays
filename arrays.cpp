#include <iostream>
using namespace std;

int foo[] = {10,15,7,77,44};
int n, result = 0;

int main(){
    for(n=0; n<5; ++n){
        result += foo[n];
    }
    cout << result;
    return 0;
}