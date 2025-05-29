//통계학 - 실버 2

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int mean(vector<int> v, int size) {
    double temp = 0;
    for (int i : v) temp += i;
    return round(temp / size);
}

int median(vector<int> v, int n) { return v.at(n / 2); }

int mode(vector<int> v, int n) {
    vector<int> counter;
    int curCount, maxCount = 0, value, i = 0;
    vector<int>::iterator it = v.begin();
    while (i < n) {
        value = v.at(i);
        curCount = count(it, v.end(), value);
        if (curCount >= maxCount) {
            if (curCount > maxCount) counter.clear();
            counter.push_back(value);
            maxCount = curCount;
        }
        i += curCount;
        it += curCount;
    }
    sort(counter.begin(), counter.end());
    if (counter.size() > 1)
        return counter.at(1);
    else
        return counter.at(0);
}

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
    cout << mean(v, N) << "\n" << median(v, N) << "\n" << mode(v, N) << "\n" << range(v);
}
