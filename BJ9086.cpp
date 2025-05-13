//문자열 - 브론즈 5
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0 ; i < T ; i++ ) {
        string s;
        cin >> s;
        cout << s[0] << s.back() << endl;
    }
}
