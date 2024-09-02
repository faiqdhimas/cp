#include <bits/stdc++.h>
using namespace std;

// Input: s = "abcabcbb" Output: 3 (abc)
// Input: s = "bbbbb" Output: 1 (b)
// Input: s = "pwwkew" Output: 3 (wke)
// Input: s = "pawpkew" Output: 5 (awpke)
int lengthOfLongestSubstring(string s){
    int start = 0;
    int maxLength = 0;
    unordered_map<char, int> charIndexMap;

    for(int end=0; end<s.length(); end++){
        char c = s[end];
        if(charIndexMap.find(c) != charIndexMap.end()){
            // move new window - after the last occurrence of currentChar
            start = charIndexMap[c] + 1; //bagian ini penting
            cout << "start: " << start << endl;
        }

        cout << c << " ";
        
        charIndexMap[c] = end;

        maxLength = max(maxLength, end-start+1);
    }

    return maxLength;
}

int main(){
    string s; getline(cin, s);
    cout << lengthOfLongestSubstring(s) << endl;
}