//팰린드롬수 - 브론즈 1

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string N, P;
    while (cin >> N) {
        if (N == "0") break;
        P = "";
        string::reverse_iterator it = N.rbegin();
        while (it != N.rend()) {
            P.push_back(*it);
            it++;
        }
        if (N == P) cout << "yes\n";
        else cout << "no\n";
    }
}
