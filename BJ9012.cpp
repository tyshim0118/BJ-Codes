//괄호 - 실버 4

#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

string VPS(string s) {
    stack<char> stk;
    stk.push('0');
    auto it = s.begin();
    while (it != s.end()) {
        if (stk.top() == '(' && *it == ')') {
            stk.pop(); it++; continue;
        }
        else stk.push(*it);
        it++;
    }
    if(stk.size() == 1) return "YES";
    else return "NO";
}

int main() {
    int T;
    string s;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> s;
        cout << VPS(s) << endl;
    }
}
