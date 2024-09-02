// Sample Input: 07:05:45PM
// Sample Output: 19:05:45

#include <bits/stdc++.h>
using namespace std;

string timeConversion(string st){
    int hour = stoi(st.substr(0,2));
    string time = st.substr(0,8);
    string format = st.substr(8,10); //pakai substring jika tau indexny

    if(format=="PM" && hour != 12){
        hour += 12;
    }else if(format=="AM" && hour == 12){
        hour = 0;
    }

    // jika belum tau indexnya, bisa find("") != string::npos
    // if(st.find("PM") != string::npos && hour!=12){
    //     cout << "masuk PM" << endl;
    //     hour += 12;
    // }else if(st.find("AM") != string::npos && hour==12){
    //     cout << "masuk else if" << endl;
    //     hour = 0;
    // }
    
    // 19 -> '1' and '9'
    time[0] = hour / 10 + '0';
    time[1] = hour % 10 + '0';

    //if want to print hour directly, just to_string(hour)
    return time;
}

int main(){
    string s;
    getline(cin, s);
    cout << timeConversion(s) << endl;
    
}