#include <iostream>
using namespace std;

bool palindrom(string forwardText){
    string backwardText = forwardText;
    reverse(backwardText.begin(), backwardText.end());

    // if(backwardText==forwardText) return true;
    // else return false;

    return backwardText == forwardText;
}

int main(){
    string forwardText, backwardText;
    getline(cin, forwardText);
    cout << palindrom(forwardText) << endl;
}