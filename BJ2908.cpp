//상수 - 브론즈 2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string A, B;
    string::iterator it = A.begin(); 
    cin >> A >> B;
    reverse(it,it+3);
    reverse(B.begin(), B.end());
    if ( A > B ) cout << A;
    else cout << B;
}
