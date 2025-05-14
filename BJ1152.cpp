//단어의 개수 - 브론즈 2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    if (s.front() == ' ') s.erase(0,1);
    if (s.back() == ' ') s.pop_back();
    int wordCount = count(s.begin(),s.end(),' ');
    if (s.empty()) cout << 0;
    else cout << ++wordCount;
}
