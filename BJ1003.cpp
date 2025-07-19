//피보나치 함수 - 실버 3

#include <iostream>
#include <utility>
using namespace std;

pair<int, int> fib(int N) {
    int a = 0, b = 1;
    if (!N) return {1, 0};
    for (int i = 1; i < N; i++) {
        int prevA = a;
        a = b;
        b += prevA;
    }
    return {a, b};
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << fib(N).first << ' ' <<  fib(N).second << '\n';
    }
}
