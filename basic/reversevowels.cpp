// Input: s = "hello" || Output: "holle"
// Input: s = "leetcode" || Output: "leotcede"
#include <bits/stdc++.h>
using namespace std;

bool ifVowel(char c){
    return (c=='a'||c=='i'||c=='u'||c=='e'||c=='o'||
    c=='A'||c=='I'||c=='U'||c=='E'||c=='O');

    // if(c=='a'||c=='i'||c=='u'||c=='e'||c=='o'|| c=='A'||c=='I'||c=='U'||c=='E'||c=='O')
    //     return true;
    // else 
    //     return false;
}

string reverseVowels(string sentence){
    int indexStart = 0;
    int indexEnd = sentence.length()-1;

    while(indexStart < indexEnd){
        if(ifVowel(sentence[indexStart]) && ifVowel(sentence[indexEnd])){
            swap(sentence[indexStart++],sentence[indexEnd--]); 
            // indexStart++; indexEnd--;
        }else if(ifVowel(sentence[indexStart]) && !ifVowel(sentence[indexEnd]))
            indexEnd--;
        else if(!ifVowel(sentence[indexStart]) && ifVowel(sentence[indexEnd]))
            indexStart++;
        else{
            indexEnd--; 
            indexStart++;
        }
    }

    return sentence;
}

int main(){
    string s;
    getline(cin,s);
    cout << reverseVowels(s) << endl;
}

