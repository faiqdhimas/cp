#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

// Sorting a vector in descending order and finding top three distinct elements
vector<int> vec = {10, 20, 44, 45, 99, 99, 30};
sort(vec.begin(), vec.end(), greater<int>());
int first = vec[0], second = -1, third = -1;
for (int value : vec) {
    if (value != first && second == -1) second = value;
    else if (value != first && value != second) { third = value; break; }
}
cout << first << " " << second << " " << third << endl;

// Checking if two vectors are equal after sorting
vector<int> a = {1, 2, 3, 4}, b = {2, 4, 1, 3};
sort(a.begin(), a.end()); sort(b.begin(), b.end());
cout << (a == b ? "True" : "False") << endl;

// Calculating diagonal difference in a matrix
vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {9, 8, 9}};
int first_diag = 0, second_diag = 0;
for (int i = 0; i < matrix.size(); i++) {
    first_diag += matrix[i][i];
    second_diag += matrix[i][matrix.size() - 1 - i];
}
cout << abs(first_diag - second_diag) << endl;

// Finding max and min in a vector and performing calculations
int maks = -1, mins = 999, total = 0;
for (int temp : {10, 20, 30, 40, 50}) {
    total += temp;
    maks = max(temp, maks);
    mins = min(temp, mins);
}
cout << total - mins << ":" << total - maks << endl;

// Merging two vectors and sorting the result
vector<int> arr1 = {1, 9, 5, 12}, arr2 = {7, 4, -6, 8};
vector<int> merged(arr1.size() + arr2.size());
merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), merged.begin());
sort(merged.begin(), merged.end());
for (int val : merged) cout << val << " ";

// Factorial and recursive printing of numbers
int factorial(int number) {
    return number <= 1 ? 1 : number * factorial(number - 1);
}
cout << factorial(5) << endl; // Example factorial
void printNumber(int n) { if (n > 0) { printNumber(n - 1); cout << n << endl; } }
printNumber(5); // Example printNumber

// Replacing 'O' or 'o' with numbers in a string
string s = "Hello World";
int count = 1;
for (char& c : s) {
    if (c == 'O' || c == 'o') { c = count + '0'; count++; }
}
cout << s << endl;

// Reversing a number
long number = 12345, reversed = 0;
while (number != 0) {
    int remainder = number % 10;
    reversed = reversed * 10 + remainder;
    number = number / 10;
}
cout << "Reversed: " << reversed << endl;

// Converting time from 12-hour format to 24-hour format
string timeStr = "07:05:45PM";
int hour = stoi(timeStr.substr(0, 2));
if (timeStr.substr(8, 2) == "PM" && hour != 12) hour += 12;
else if (timeStr.substr(8, 2) == "AM" && hour == 12) hour = 0;
cout << (hour < 10 ? "0" : "") << hour << timeStr.substr(2, 6) << endl;
