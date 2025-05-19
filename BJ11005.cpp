//진법 변환 2 - 브론즈 1
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int N, B;
    cin >> N >> B;
    if (!N) {cout << N; return 0;} 
    int i = 0;
    while (pow(B, i) <= N) {
        i++;
    }
    char NB[i], rNB[i];
    for (int j = 0; j < i; j++) {
        NB[j] = N % B;
        N /= B;
    }
    for (int k = 0; k < i; k++) {
        if (NB[k] > 9) NB[k] = NB[k] + 'A' - 10;
        else NB[k] += '0';
    }
    for (int l = 0; l < i; l++) {
        rNB[i - l - 1] = NB[l];
    }
    for (int m = 0; m < i; m++) {
        cout << rNB[m];
    }
}
