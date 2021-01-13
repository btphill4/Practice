#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

//print out all positive integers
void printPos(int n){
    for(n=1; n<=100; n++){
        cout << n << ", ";
    }
}

void printKPos(int k){
//print out k positive nunbers
int n;
cout << endl;

    for(n = 1; n <= k; n++){
        cout << n << ", ";
    }
}

int main(){
//printPos(n) function
cout << "PrintPos(n)" << endl;
printPos(12);

cout << endl << "printKPos(k)" << endl;
printKPos(15);
}//end main
