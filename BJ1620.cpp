//나는야 포켓몬 마스터 이다솜 - 실버 4

#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<int, string> pokedex_keyN;
    unordered_map<string, int> pokedex_keyS;
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        string s;
        cin >> s;
        pokedex_keyN.insert({i, s});
        pokedex_keyS.insert({s, i});
    }

    for (int i = 0; i < M; i++) {
        string x;
        cin >> x;
        auto it = x.begin();
        if (*it >= '1' && *it <= '9') {
            int xi = stoi(x);
            cout << pokedex_keyN.find(xi)->second << '\n';
        } else {
            cout << pokedex_keyS.find(x)->second << '\n';
        }
    }
}
