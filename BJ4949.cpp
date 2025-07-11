//균형잡힌 세상 - 실버 4

#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

string balance(string s) {
    stack<char> stk;
    stk.push('0');
    auto it = s.begin();
    while (it != s.end()) {
        if ((stk.top() == '(' && *it == ')') || (stk.top() == '[' && *it == ']')) {
            stk.pop();
        } else if (*it == '(' || *it == ')' || *it == '[' || *it == ']')
            stk.push(*it);
        it++;
    }
    if (stk.size() == 1)
        return "yes";
    else
        return "no";
}

int main() {
    string s;
    while (1) {
        getline(cin, s);
        if (s == ".") return 0;
        cout << balance(s) << endl;
    }
}
