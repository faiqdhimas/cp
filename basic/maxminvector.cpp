#include <bits/stdc++.h>
using namespace std;
//input 1 2 3 4 5
//output 14:10 [total-min, total-max]

int maxFunction(int a, int b){ //not needed actualy
    if(a>=b) return a;
    else return b;
}

int main(){
    int n=5, temp, total=0;
    int maks = -1, mins = 999;

    for(int i=0; i<n; i++){
        cin >> temp;
        total+=temp;
        maks = max(temp, maks); 
        mins = min(temp, mins);
    }
    cout << total-mins << ":" << total-maks << endl;

    // Array vs Vector
    int arr[6] = {1,2,3,4,5,7};
    vector<int> vec = {1,2,3,4,6};

    // vec.push_back(8); //lawannya vec.pop_back();
    vec.insert(vec.begin(), 20); //lawannya vec.erase(vec.begin())

    cout << "before" << endl;

    cout << *max_element(vec.begin(), vec.end()) << endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << *max_element(arr, arr+size) << endl;

    cout << *min_element(vec.begin(), vec.end()) << endl;
    cout << *min_element(arr, arr+size) << endl;

    vec.insert(vec.begin()+2, 40); //lawannya vec.erase(vec.begin()+index)

    cout << "after" << endl;

    cout << *max_element(vec.begin(), vec.end()) << endl;
    cout << *max_element(arr, arr+size) << endl;

    cout << *min_element(vec.begin(), vec.end()) << endl;
    cout << *min_element(arr, arr+size) << endl;
    


}