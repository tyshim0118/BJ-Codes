//음계 - 브론즈 2

#include <iostream>
using namespace std;

int main() {
    int T, Os, result;
    string ox;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> ox;
        string::iterator it = ox.begin();
        Os = 0;
        result = 0;
        while (*it) {
            if (*it == 'O') {
                Os++;
                result += Os;
                it++;
            } else {
                Os = 0;
                it++;
            }
        }
        cout << result << '\n';
    }
}
