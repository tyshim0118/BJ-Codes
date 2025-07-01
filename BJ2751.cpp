//수 정렬하기 2 - 실버 5

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    vector<int> v;
    int N, t;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    auto it = v.begin();
    for (int i = 0; i < N; i++) {
        cout << *it << "\n";
        it++;
    }
}
