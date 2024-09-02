#include <bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> vec = {10, 20, 44, 45, 99, 99, 30};
//     // vector<int> vec = {99, 120, 10, 100, 20, 33, 30};
    
//     int first = -1;
//     int second = -1;
//     int third = -1;

//     for(int value: vec){
//         if(value > first){
//             third = second;
//             second = first;
//             first = value;
//         }else if(value > second && value != first){
//             third = second;
//             second = value;
//         }else if(value > third && value != first && value != second){
//             third = value;
//         }
//     }

//     cout << first << " " << second << " " << third << endl;

// }

int main(){
    vector<int> vec = {10, 20, 44, 45, 99, 99, 30};
    sort(vec.begin(), vec.end(), greater<int>());

    cout << vec[0] << "-" << vec[vec.size()-1] << endl;

    int first = vec[0];
    int second = -1;
    int third = -1;

    for(int value: vec){
        if(value != first && second == -1){
            second = value;
        }else if(value != first && value != second){
            third = value;
            break; //IMPORTANT 
            // Stop searching once second and third are found
        }
    }

    cout << first << " " << second << " " << third << endl;

}