//세탁소 사장 동혁 - 브론즈 3
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int T, Q, D, N, P, total;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> total;
        Q = total / 25;
        total %= 25;
        D = total / 10;
        total %= 10;
        N = total / 5;
        total %= 5;
        P = total;
        cout << Q << " " << D << " " << N << " " << P << endl;
    }
}
