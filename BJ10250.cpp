//ACM 호텔 - 브론즈 3

#include <iostream>
using namespace std;

int main() {
    int T, H, W, N, F, R; //Test, Height, Width, Number, Floor, Room
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        F = N / H + 1;
        R = N % H;
        if (!R) cout << H * 100 + F - 1 << endl;
        else cout << R * 100 + F << endl;
    }
}
