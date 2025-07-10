//좌표 정렬하기 2 - 실버 5

#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second == p2.second) return p1.first < p2.first;
    return p1.second < p2.second;
}

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) {
        pair<int, int> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    sort(v.begin(), v.end(),cmp);
    for (pair<int, int> p : v) {
        cout << p.first << ' ' << p.second << '\n';
    }
}
