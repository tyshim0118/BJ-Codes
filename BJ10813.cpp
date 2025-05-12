//공 바꾸기 - 브론즈 2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M, i, j;
    cin >> N >> M;
    int *arr = new int[N];
    for ( int a = 0 ; a < N ; a++ ) arr[a] = a + 1;
    for ( int a = 0 ; a < M ; a++) {
        cin >> i >> j;
        swap( *(arr+i-1), *(arr+j-1));
    }
    for ( int a = 0 ; a < N ; a++ ) cout << arr[a] << " ";
}
