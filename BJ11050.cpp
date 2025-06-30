#include <iostream>
using namespace std;

int fact(int N) {
    if (!N) return 1;
    return N * fact(N - 1);
}
int main() {
    int N, K;
    cin >> N >> K;
    int BC = fact(N) / fact(K) / fact(N - K);
    cout << BC;
}
