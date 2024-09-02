#include <bits/stdc++.h>
using namespace std;

//make-two-arrays-equal-by-reversing-subarrays
//input: target = [1,2,3,4], arr = [2,4,1,3] | output: true
//input: target = [3,7,9], arr = [3,7,11] | output: false
//Return true if you can make arr equal to target or false otherwise.

bool isEqual(vector<int>& target, vector<int>& arr){

    if(target.size()!=arr.size())
        return 0;
    
    sort(target.begin(), target.end());
    sort(arr.begin(), arr.end());

    // for(int i=0; i<target.size(); i++){
    //     if(target[i]!=arr[i])
    //         return 0;
    // }

    // 2nd way: compare the contents of both objects correctly.
    if(target!=arr)
        return false;

    return 1;
}

int findUniqueElement(vector<int> vec){
    sort(vec.begin(), vec.end());
    for(int i=0; i<vec.size(); i++){
        if((i==0 || vec[i]!=vec[i-1]) && (i==vec.size()-1 || vec[i]!=vec[i+1]))
            return vec[i];
    }
    return -1;
}

int main(){
    vector<int> a = {1,2,3,4};
    vector<int> b = {2,4,1,4};
    vector<int> f = {3,2,3,2,9};
    vector<int> g = {3,2,2,3,9};

    // vector<int> a = {3,7,9};
    // vector<int> b = {3,7,11};

    cout << isEqual(a,b) << endl;
    cout << (isEqual(f,g)?"True":"False") << endl;
    // cout << (isEqual(a,b)? "True":"False") << endl;

    cout << findUniqueElement(f) << endl;
}