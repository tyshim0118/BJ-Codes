/*

range-based for loop에 대해 처음 알았고,
vector의 다양한 기능들을 사용해볼 수 있었으며, 또 cmath의 round() 등 새로운
것들을 많이 경험하고 사용했기에 중요했던 문제라고 생각함. 따라서 *을 붙임.

*/

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


//다른 사람의 mode()를 가지고 와 내 스타일로 변경해보았다.

int mode(vector<int> v)
{
    map<int, int> m;
    vector<int> s;
    for (auto &i : v)
        m[i]++;
    int max = 0;
    for (const auto &[key, value] : m)
        max = max < value ? value : max;
    for (const auto &[key, value] : m)
        if (value == max)
            s.push_back(key)
                ;
    sort(s.begin(), s.end());
    if (s.size() > 1)
        return s.at(1);
    else
        return s.at(0);
}

