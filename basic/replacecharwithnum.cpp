#include <bits/stdc++.h>
using namespace std;
// input: helloworld
// output: hell1w2rld

string replaceWithNum(string s){ //inihanyaworking fine 1-9
    int count = 1;
    //pakai & supaya data asli file (string s) langsung berpengaruh
    for(char& c: s){ //reference or address the the actual characters in string
        if(c=='O'||c=='o'){
            c = count + '0';
            count++;
        }
    }
    return s;
}

string replaceWithNumPlus(string s){
    int count = 1;
    stringstream ss;
    //tidak perlu &, karena ada variabel baru ss yg menyimpan ulang data
    for(char c:s){
        if(c=='O' || c=='o'){
            ss << count;
            count++;
        }else{
            ss << c;
        }
    }
    return ss.str();
} 

int main(){
    string s;
    getline(cin, s);
    cout << replaceWithNumPlus(s) << endl;
}