//소수 구하기 - 실버 3

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    vector<int> isPrime(N + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= N; i++) {
        for (int j = 2 * i; j <= N; j += i) {
            if (isPrime[j]) isPrime[j] = 0;
        }
    }
    for (int i = M; i <= N; i++) {
        if (isPrime[i]) {
            cout << i << "\n";
        }
    }
}
