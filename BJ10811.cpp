//바구니 뒤집기 - 브론즈 2
#include <iostream>
#include <stack>
using namespace std;

int main() {
int N, M, I, J;
cin >> N >> M;
int *basket = new int[N];
for (int i = 0 ; i < N ; i++ ) {
    basket [i] = i+1 ; 
} 
for (int j = 0 ; j < M ; j++ ) {
    cin >> I >> J;
    stack<int> basketReverse;
    for ( int k = I-1 ; k < J ; k++ ) {
            basketReverse.push(basket[k]);
    } 
    int i = I-1;
    while(!basketReverse.empty()) {
        basket[i++] = basketReverse.top();
        basketReverse.pop();
    }
}
for (int i = 0; i < N ; i++) cout << basket[i] << " ";
}
