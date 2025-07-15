//듣보잡 - 실버 4

#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;

int main() {
    unordered_set<string> cantHear;
    set<string> cantHS;
    int N, M;
    cin >> N >> M;
    for (int i = 0 ; i < N ; i++) {
        string s;
        cin >> s;
        cantHear.insert(s);
    }

    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        if(cantHear.find(s) != cantHear.end())
            cantHS.insert(s);
    }
    cout << cantHS.size() << '\n';

    for (string s : cantHS) {
        cout << s << '\n';
    }
}
