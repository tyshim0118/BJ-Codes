//A + B - C - 브론즈 4

#include <iostream>
using namespace std;

int main() {
    int A, B, C, q = 10;
    cin >> A >> B >> C;
    cout << A + B - C << endl;
    while (B / q) q *= 10;
    cout << A * q + B - C;
}
