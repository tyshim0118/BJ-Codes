//동전 0 - 실버 4

#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int N, K, coins = 0;
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int coinValue;
        cin >> coinValue;
        s.push(coinValue);
    }

    while (K) {
        coins += (K/s.top());
        K %= s.top();
        s.pop();        
    }

    cout << coins;
}
