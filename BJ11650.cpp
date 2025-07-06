//좌표 설정하기 - 실버 5

#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    for (pair<int, int> p : v) {
        cout << p.first << ' ' << p.second << '\n';
    }
}
