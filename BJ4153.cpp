//직각삼각형 - 브론즈 3
#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    while(1) {
        cin >> A >> B >> C;
        if (!(A + B + C)) break;
        if (A * A + B * B == C * C) cout << "right" << '\n';
        else if (C * C + A * A == B * B) cout << "right" << '\n';
        else if (B * B + C * C == A * A) cout << "right" << '\n';
        else cout << "wrong" << '\n';
    }
}
