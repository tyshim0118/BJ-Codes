#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

void myStack(string order, stack<int>& s) {
    if (order == "push") {
        int n;
        cin >> n;
        s.push(n);
    } else if (order == "pop") {
        if (!s.empty()) {
            cout << s.top();
            s.pop();
        } else
            cout << -1;
    } else if (order == "size") {
        cout << s.size();
    } else if (order == "empty") {
        cout << s.empty();
    } else if (order == "top") {
        if (!s.empty()) { cout << s.top();
        } else cout << -1;
    }
}

int main() {
    int N;
    stack<int> s;
    string order;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> order;
        myStack(order, s);
        if (order != "push") cout << "\n";
    }
}
