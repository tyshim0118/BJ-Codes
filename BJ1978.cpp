//소수 찾기 - 브론즈 2

#include <iostream>
using namespace std;

int main() {
    int N, res = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int prime;
        cin >> prime;
        for (int j = 2; j <= prime; j++) {
            if (prime == j) res++;
            if (prime % j == 0) break;
        }
    }
    cout << res;
}
