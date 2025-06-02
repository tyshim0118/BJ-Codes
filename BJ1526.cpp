//가장 큰 금민수 - 브론즈 1

#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, tn = 0;
    string ts, gms;
    cin >> N;
    while (tn <= N) {
        ts = to_string(tn);
        int sw = 0;
        for (char c : ts) {
            if (c == '4' || c == '7') sw = 1;
            else { sw = 0; break; }
        }
        if (sw) gms = ts;
        tn++;
    }
    cout << gms;
}
