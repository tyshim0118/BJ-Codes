//집합 - 실버 5

#include <algorithm>
#include <iostream>
using namespace std;

void sets(string str, int S[], int x = 0) {
    if (str == "add") {
        S[x] = 1;
    } else if (str == "remove") {
        S[x] = 0;
    } else if (str == "check") {
        cout << S[x] << '\n';
    } else if (str == "toggle") {
        S[x] = !S[x];
    } else if (str == "all") {
        fill(S, S + 21, 1);
    } else {
        fill(S, S + 21, 0);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int M, S[21] = {0,};
    cin >> M;
    for (int i = 0; i < M; i++) {
        string s;
        int x;
        cin >> s;
        if (s == "empty" || s == "all") sets(s, S);
        else {
            cin >> x;
            sets(s, S, x);
        }
    }
}
