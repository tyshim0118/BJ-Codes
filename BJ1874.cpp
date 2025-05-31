//스택 수열 - 실버 2

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N, t;
    stack<int> s;
    string str = "";
    cin >> N;
    int seq[N];

    for (int i = 0; i < N; i++) {
        cin >> t;
        seq[i] = t;
    }
    int prev = 0;
    string p = "+\n", m = "-\n";
    for (int e : seq) {
        if (!s.size()) {
            s.push(0);
        }
        if (s.top() > e) {cout << "NO"; return 0; }
        if (s.top() < e) {
            for (int j = prev+1; j <= e; j++) {
                s.push(j);
                str.append(p);
            }
        }
        s.pop();
        str.append(m);
        if (prev < e) prev = e;
    }
    cout << str;
}
