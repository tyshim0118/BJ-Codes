//숫자의 개수 - 브론즈 2
#include <iostream>
using namespace std;

int main() {
    int A, B, C, result[10] = {0,};
    cin >> A >> B >> C;
    A *= B * C;
    while (A) {
        result[A % 10]++;
        A /= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << result[i] << "\n";
    }
}
