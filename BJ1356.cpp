//유진수 - 브론즈 1

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    vector<int> v;
    cin >> N;
    while (N > 0) {
        v.push_back(N % 10);
        N /= 10;
    }
    if (v.size() <= 1) {cout << "NO"; return 0;}
    int t = 1, eugene = 0;
    while (t < v.size()) {
        int i, a = 1, b = 1;
        for (i = 0; i < t; i++) {a *= v[i];}
        t++;
        for (int j = i; j < v.size(); j++) {b *= v[j]; }
        if (a == b) {
            eugene = 1;
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
