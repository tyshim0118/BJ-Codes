//다리 놓기 - 실버 5

#include <algorithm>
#include <iostream>
using namespace std;

int C(int n, int m) {
    unsigned long long res = 1;
    if (n / 2 >= m) m = n - m;
    for (int i = n; i > m; i--) {
        res *= i;
    }
    for (int i = n - m; i > 0; i--) {
        res /= i;
    }

    return res;
}
int main() {
    int T, N, M;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        auto combi = C(M, N);
        cout << combi << "\n";
    }
}
