//블랙잭 - 브론즈 2

#include <iostream>
using namespace std;

int main() {
    int N, M, temp, diff, res;
    cin >> N >> M;
    int card[N];
    diff = M;
    for (int i = 0; i < N; i++) cin >> card[i];
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                temp = card[i] + card[j] + card[k];
                if (M - temp <= diff && M - temp >= 0) {
                    diff = M - temp;
                    res = temp;
                }
            }
        }
    }
    cout << res;
}
