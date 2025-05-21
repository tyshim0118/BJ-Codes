//분수찾기 - 실버 5
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int i = 0, X, deno = 0, nume = 1, oddSwitch = 1;
    cin >> X;
    while (i < X) {
        deno++;
        i += deno;
    }
    if (!(deno%2)) oddSwitch = 0;
    while (i > X) {
        i--;
        deno--;
        nume++;
    }
    if(oddSwitch) cout << nume << "/" << deno;
    else cout << deno << "/" << nume;
}
