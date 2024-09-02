#include <bits/stdc++.h>
// input: 10 [print 1-10 without for loops]
// output: 1 2 3 4 5 6 7 8 9

// input: 10 [sum 1-10 using recursive]
// output: 55

using namespace std;

int sumNumber(int number){
    if(number > 0){
        return number + sumNumber(number-1);
    }else{
        return 0;
    }
}

int factorial(int number){
    if(number <= 1) //Recursion basis: if n <= 1, the factorial is 1
        return 1;
    else 
        return number * factorial(number-1);
}

void printNumber(int threshold){
    // int number;
    if(threshold > 0){
        printNumber(threshold-1);
        cout << threshold << endl;
    }
}

int main(){
    int n;
    cin >> n;

    cout << sumNumber(n) << endl;
    cout << factorial(n) << endl;
    printNumber(n);
}