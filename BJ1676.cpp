//팩토리얼 0의 개수 - 실버 5

#include <iostream>
using namespace std;

int main() {
    int N, count = 0;
    cin >> N;
    count = N / 5 + N / 25 + N / 125;
    cout << count;
}
