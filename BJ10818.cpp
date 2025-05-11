//최소, 최대 - 브론즈 3
#include <iostream>
using namespace std;

int main() {
    int N, maxInt = -1000000, minInt = 1000000, a;
    cin >> N;
    for (int i = 0; i < N ; i++) {
        cin >> a;
        if (a > maxInt) maxInt = a;
        if (a < minInt) minInt = a;
    }
    cout << minInt << " " << maxInt;
}
