//알고리즘 수업 - 피보나치 수 1 - 브론즈 1

#include <iostream>
using namespace std;

int cnt1, cnt2 = 0;
int fib(int n) {
    if (n == 1 or n == 2) {
        cnt1++;
        return 1;
    } else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    int f[n + 1];
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
        cnt2++;
    }
    return f[n];
}

int main() {
    int n;
    cin >> n;
    fib(n);
    fibonacci(n);
    cout << cnt1 << ' ' << cnt2;
}
