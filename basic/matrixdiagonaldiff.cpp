// 1 2 3
// 4 5 6
// 9 8 9  
// The left-to-right diagonal = 1 + 5 + 9 = 15.  (00 -> 11 -> 22)
// The right to left diagonal = 3+5 + 9 = 17. (02 -> 11 -> 20)
// Their absolute difference is15 - 17 = 2

#include <bits/stdc++.h>
using namespace std;

int diagonalDif(vector<vector<int> > vec){
    int first = 0;
    int second = 0;
    
    for(int i=0; i<vec.size(); i++){
        first += vec[i][i];
        second += vec[i][vec.size()-1-i];
    }
    cout << first << " " << second << endl;

    return abs(first-second);
}

int main(){
    int n; cin >> n;
    int value;

    // vector<vector<int>> matrix(n)()
    vector<vector<int> > matrix(n, vector<int>(n));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
        }
    }

    cout << "Abs Diff: " << diagonalDif(matrix) << endl;

}