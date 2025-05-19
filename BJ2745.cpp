//진법 변환 - 브론즈 2
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int change(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 10;
    }
    else return c - '0';
}
int main() {
    int B, N10 = 0, NLength;
    string N;
    cin >> N >> B;
    NLength = N.length();
    for (int i = 0 ; i < NLength ; i++) {
        N10 += change(N[i]) * pow(B,(NLength-i-1));
    }
    cout << N10;
}
