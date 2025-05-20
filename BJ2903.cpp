//중앙 이동 알고리즘 - 브론즈 3
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N, result = 2, temp = 1;
    cin >> N;
    for (int i = 0; i < N; i++) {
        result += temp;
        temp *= 2;
    }
    result *= result;
    cout << result;
}
