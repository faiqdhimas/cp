#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArray(vector<int> arr1, vector<int> arr2){
    vector<int> vec(arr1.size() + arr2.size());
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), vec.begin());
    return vec;
}

int main(){
    vector<int> arr1 = {1, 9, 5, 12};
    vector<int> arr2 = {7, 4, -6, 8};

    vector<int> merged = mergeArray(arr1, arr2);
    sort(merged.begin(), merged.end());

    for(auto val: merged){
        cout << val << " ";
    }

    cout << endl;
}