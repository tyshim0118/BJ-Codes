//요세푸스 문제 0 - 실버 4

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> v(N + 1, 0);
    v[0] = 1;
    int index = 0;
    cout << "<";
    for (int i = 0; i < N; i++) {
        int count = 0;
        while (count < K - 1) {
            if (v[index %= N + 1] == 0) count++;
            index++;
        }
        while (v[index %= N + 1]) index++;
        v[index] = 1;
        cout << index;
        if (i < N - 1)
            cout << ", ";
        else
            cout << ">";
    }
}
