//팰린드롬인지 확인하기 - 브론즈 3
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string word;
    int palindrome = 1, count;
    cin >> word;
    count = word.length() / 2;
    string::iterator begin = word.begin();
    string::iterator end = word.end() - 1;
    for (int i = 0; i < count; i++)
    {
        if (*begin == *end) {
            begin++;
            end--;
        }
        else {
            palindrome = 0;
            break;
        }
    }
    cout << palindrome;
}
