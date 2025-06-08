//나누기 - 브론즈 2

#include <iostream>
using namespace std;

int main() {
    int N, F, count = 0;
    cin >> N >> F;
    N = N - N % 100;
    while (N % F != 0) {
        N++;
        count++;
    }
    if (count < 10) cout << '0' << count;
    else cout << count;
}
