//킹, 퀸, 룩, 비숍, 나이트, 폰 - 브론즈 5
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int chessPieceArray[6] = { 1, 1, 2, 2, 2, 8 };
    int A;
    for ( int i = 0 ; i < 6 ; i++) {
        cin >> A;
        cout << chessPieceArray[i] - A << " ";
    }
}
