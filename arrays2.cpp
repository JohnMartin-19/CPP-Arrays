//arrays as params

#include <iostream>
using namespace std;

void printmyarray(int arg[], int length){
    for (int n=0; n<length; n++)
    cout << arg[n] << ' ';
    cout << '\n';
}

int main(){
    int firstarray[] = {5,10,12,56};
    int secondarray[] = {12,54,62,90,67};
    printmyarray(firstarray,4);
    printmyarray(secondarray,5);
}