//제로 - 실버 4

#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int K, res = 0;
    cin >> K;
    stack<int> zero;
    for (int i = 0; i < K; i++) {
        int n;
        cin >> n;
        if (n)
            zero.push(n);
        else
            zero.pop();
    }
    while (!zero.empty()) {
        res += zero.top();
        zero.pop();
    }
    cout << res;
}
