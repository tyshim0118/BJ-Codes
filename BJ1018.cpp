//체스판 다시 칠하기 - 실버 4

#include <iostream>
using namespace std;

int pick(string s[]) {
    int bres = 0, wres = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2) {
                if (s[i][j] == 'B') bres++;
                else wres++;
            } else {
                if (s[i][j] == 'B') wres++;
                else bres++;
            }
        }
    }
    return (wres < bres) ? wres : bres;
}
int main() {
    int N, M, res = 100;
    cin >> N >> M;
    string board[N];
    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }
    for (int i = 0; i < M - 7; i++) {
        for (int j = 0; j < N - 7; j++) {
            string line[8];
            for (int k = 0; k < 8; k++) {
                line[k] = board[j + k].substr(i, 8);
            }
            int p = pick(line);
            if (res > p) res = p;
        }
    }
    cout << res;
}
