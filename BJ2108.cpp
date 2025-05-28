//통계학 - 실버 2

#include <algorithm>
#include <iostream>
using namespace std;
vector<int>::iterator it;

int avg(vector<int> v, int size) {
    double temp = 0;
    it = v.begin();
    while (it != v.end()) {
        temp += *it;
        it++;
    }
    return round(temp / size);
}

int middle(vector<int> v, int n) { return v.at(n / 2); }

int range(vector<int> v) { return *v.rbegin() - *v.begin(); }

int main() {
    vector<int> v;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    cout << avg(v, N) << "\n";
    cout << middle(v, N) << "\n";
    cout << range(v);
}
