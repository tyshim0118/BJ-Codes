//최댓값 - 브론즈 3
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, maxInt = 0, maxOrder = 0;
    for (int i = 0 ; i < 9 ; i++) {
        cin >> N;
        if (N > maxInt) { 
            maxInt = N; 
            maxOrder = i + 1;
        }
    }
    cout << maxInt << "\n" << maxOrder;
}
