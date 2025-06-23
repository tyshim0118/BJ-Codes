//큐 - 실버 4

#include <algorithm>
#include <iostream>
using namespace std;

void Q(string order, queue<int>& q) {
    if (order == "push") {
        int n;
        cin >> n;
        q.push(n);
    } else if (order == "pop") {
        if (!q.empty()) { cout << q.front(); q.pop();
        } else cout << -1;
    } else if (order == "size") {
        if (!q.empty()) cout << q.size();
        else cout << 0;
    } else if (order == "empty") {
        if (!q.empty()) cout << 0;
        else cout << 1;
    } else if (order == "front") {
        if (!q.empty()) cout << q.front();
        else cout << -1;
    } else if (order == "back") {
        if (!q.empty()) cout << q.back();
        else cout << -1;
    }
}

int main() {
    int N;
    queue<int> q;
    string order;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> order;
        Q(order, q);
        if (order != "push") cout << "\n";
    }
}
