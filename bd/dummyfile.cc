#include <bits/stdc++.h>
using namespace std;

int getNextNumber(int n){
    int totalSum = 0;
    while(n!=0){
        int digit = n%10;
        totalSum += digit*digit;
        n /= 10;
    }
    return totalSum;
}

string isHappyNumber(int n){
    unordered_set<int> cacheNumber;

    while(n!=1 && cacheNumber.find(n)==cacheNumber.end()){
        cacheNumber.insert(n); //insert first before n changes
        n = getNextNumber(n);
    }

    return n==1? "True":"False";
}

int main(){
    int n; cin >> n;
    cout << isHappyNumber(n) << endl;
}