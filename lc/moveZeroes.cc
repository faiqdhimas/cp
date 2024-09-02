#include <bits/stdc++.h>
using namespace std;

void moveZeroes1(vector<int>& data){ //kalo pake void jgn lupa addresingnya &
    int lastNonZeroIndex = 0;
    int current = 0;

    while(current < data.size()){
        if(data[current]!=0){
            cout << "current: " << current << endl;
            cout << "lastnon0index: " << lastNonZeroIndex << endl;
            swap(data[current], data[lastNonZeroIndex]);
            lastNonZeroIndex++;
        }
        current++;
    }
}

vector<int> moveZeroes2(vector<int>& data){
    int current = 0;

    for(int i=0; i<data.size(); i++){
        if(data[i]!=0){
            data[current] = data[i];
            current++;
        }
    }

    for(int i=current; i<data.size(); i++){
        data[i] = 0;
    }

    return data;
}

int main(){
    vector<int> data = {0,1,0,3,12};
    // data = moveZeroes2(data);
    moveZeroes1(data);
    cout << endl;
    for(auto i: data){
        cout << i << " ";
    }
    cout << endl;
}