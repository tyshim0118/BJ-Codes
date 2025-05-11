//개수 세기 - 브론즈 5
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N = 0, v = 0;
    cin >> N;
    int arr[N];
    for (int i = 0 ; i < N; i++) {
        cin >> arr[i]; 
    }
    cin >> v;
    int result = count(arr, arr+N ,v);
    cout << result << endl;
}
