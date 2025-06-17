//분해합 - 브론즈 2

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int con = 1; con < N; con++) {
        int res = 0, temp = con;
        res += temp;
        while (temp > 0) {
            res += temp % 10;
            temp /= 10;
        }
        if (N == res) {
            cout << con;
            return 0;
        }
    }
    cout << 0;
}
