//핸드폰 요금 - 브론즈 3

#include <iostream>
using namespace std;

int ys(int t) { return (t / 30 + 1) * 10; }
int ms(int t) { return (t / 60 + 1) * 15; }

int main() {
    int N, T, y = 0, m = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> T;
        y += ys(T);
        m += ms(T);
    }
    if (y > m) cout << "M " << m;
    else if (m > y) cout << "Y " << y;
    else cout << "Y M " << y;
}
