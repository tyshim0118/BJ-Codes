//X보다 작은 수 - 브론즈 5
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, X, comp;
    cin >> N >> X;
    for (int i = 0; i < N ; i++) {
        cin >> comp;
        if (comp < X) cout << comp << " ";
    }
    return 0;
}
