//문자열 반복 - 브론즈 2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    for ( int i = 0 ; i < T ; i++) {
        int R;
        string s;
        cin >> R >> s;
        int sLength = s.length();
        for ( int j = 0 ; j < sLength ; j++) {
            for ( int k = 0 ; k < R ; k++ )cout << s[j] ;
        }
        cout << endl;
    }
}
