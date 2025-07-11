//설탕 배달 - 실버 4

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int pb = 10001;
    for (int i = 0; i * 5 <= N; i++) {
        int temp = 10001;
        bool sw = 0;
        if (!((N - 5 * i) % 3)) {
            temp = (N - 5 * i) / 3 + i;
            sw = 1;
        }
        if (sw && temp < pb) pb = temp;
    }
    if (pb == 10001) pb = -1;
    cout << pb;
}
