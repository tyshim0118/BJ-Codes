//스택 수열 - 실버 2

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N, t;
    stack<int> s;
    //s.push(0)
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
        if (!s.size()) { //굳이 이렇게 안하고 이 if문 대신 처음에 stack 선언할 때 s.push(0)하는 게 더 좋을 듯
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
