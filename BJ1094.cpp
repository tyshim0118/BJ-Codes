//막대기 - 실버 5

#include <iostream>
using namespace std;

int main() {
    int X, stick = 64, count = 0;
    cin >> X;
    while (X) {
        while (X < stick) stick /= 2;
        X -= stick;
        count++;
    }
    cout << count;
}
