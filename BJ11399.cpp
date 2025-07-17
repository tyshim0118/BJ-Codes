//ATM - 실버 4

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    vector<int> v;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int P;
        cin >> P;
        v.push_back(P);
    }
  
    sort(v.begin(), v.end());
  
    int total = 0, adder = 0;
    for (int j : v) {
        adder += j;
        total += adder;
    }
    cout << total;
}
