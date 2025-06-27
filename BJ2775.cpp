#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int k, n, res = 1;
        cin >> k >> n;
        for (int j = 1; j <= k + 1; j++) {
            res = res * n / j;
            n++;
        }
        cout << res << "\n";
    }
}
