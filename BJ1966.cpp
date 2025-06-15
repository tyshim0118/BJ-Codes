//프린터 큐 - 실버 3

#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int printerQueue() {
    int N, M, c, res = 0;
    queue<pair<int, int> > Q;
    vector<int> V;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int a, p = 0;
        cin >> a;
        if (i == M) p = 1;
        Q.push({a, p});
        V.push_back(a);
    }
    int j = 9;
    while (j >= 1) {
        c = count(V.begin(), V.end(), j);
        vector<int>::iterator it = find(V.begin(), V.end(), j);
        if (!c) { j--; continue; }
        while (1) {
            pair<int, int> f = Q.front();
            if (f.first == j) {
                Q.pop();
                res++;
                if (f.second) return res;
                else { V.erase(it); break;}
            } 
            else { Q.pop(); Q.push(f); }
        }
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cout << printerQueue() << "\n";
    } 
}
