#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);

    reverse(s.begin(), s.end());
    cout << s << endl;

    string a,b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    cout << a << " " << b << endl;

}