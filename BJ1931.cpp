// 회의실 배정 - 골드 5

#include <algorithm>
#include <iostream>
#include <utility>
#include <stack>
#include <limits.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    stack<pair<int, int>> s;
    s.push({0, INT_MAX});
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++) {
        int b, e;
        cin >> b >> e;
        v.push_back({b, e});
    }
    sort(v.begin(), v.end());
    auto it = v.begin();
    while (it != v.end()) {
        if ((*it).second < s.top().second) {
            s.pop();
            s.push(*it);
        }
        else if ((*it).first >= s.top().second) {
            s.push(*it);
        }
        it++;
    }
    cout << s.size() << '\n';
}
