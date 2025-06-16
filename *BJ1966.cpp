//프린터 큐 - 실버 3

/*

queue와 pair를 제대로 처음 써봤다. 이런저런 알고리즘, 예를 들어 iterator를 이용한
erase()와 같은 알고리즘도 제대로 썼고, queue에 pair를 접합해본 것은 처음이기에
충분히 *을 달아놓을 가치가 있다고 느꼈다. 앞으로 pair를 자주 사용하게 될 것 같다.

*/

#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int printerQueue() {
    int N, M, c, res = 0;
    queue< pair<int, int> > Q;
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
