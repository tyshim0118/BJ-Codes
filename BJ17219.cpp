//비밀번호 찾기 - 실버 4

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, string> pwMap;
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        string site, pw;
        cin >> site >> pw;
        pwMap.insert({site, pw});
    }

    for (int i = 0; i < M; i++) {
        string s;
        cin >> s;
        cout << pwMap.find(s)->second << '\n';
    }
}
