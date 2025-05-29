//웰컴 키트 - 브롡즈 3

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int N, s, T, P, shirts = 0;
    vector<int> v;
    cin >> N;
    for (int i = 0; i < 6; i++) {
        cin >> s;
        v.push_back(s);
    }
    cin >> T >> P;
    for (double i : v) {
        shirts += ceil(i / T);
    }
    cout << shirts << "\n";
    cout << N / P << " " << N % P;
}
