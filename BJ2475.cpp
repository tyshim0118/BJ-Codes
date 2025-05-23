//검증수 - 브론즈 5
#include <iostream>
using namespace std;

int main() {
    int i, result = 0;
    while (cin >> i) {
        result += i * i;
    }
    cout << result % 10;
}
