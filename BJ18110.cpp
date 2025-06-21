//solved.ac - 실버 4

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    vector<int> diffi;
    cin >> n;
    if (!n) {cout << "0"; return 0;}
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        diffi.push_back(d);
    }
    sort(diffi.begin(), diffi.end());
    auto cut = round(n * 0.15);
    int sum = 0;
    for (int i = cut; i < n - cut; i++) {
        sum += diffi[i];
    }
    cout << round(sum / (n - 2 * cut));
}
