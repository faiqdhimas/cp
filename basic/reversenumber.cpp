#include <iostream>
#include <algorithm>

using namespace std;

//input: 12345
//output: 54321

//using string
// int main(){
//     string number;
//     getline(cin, number);

//     reverse(number.begin(), number.end());

//     cout << number << endl;
// }

//using integer
int main(){
    long number;
    cin >> number;
    int output = 0;

    while(number!=0){
        int remainder = number%10;
        output = output * 10 + remainder;
        number = number/10;
    }

    cout << "OUTPUT REVERSED : " << output << endl;
}