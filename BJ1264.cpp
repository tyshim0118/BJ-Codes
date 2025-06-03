//모음의 개수 - 브론즈 4
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "";
    int v;
    while (1) {
        v = 0;
        getline(cin, s);
        if (s == "#") break;
        for (char c : s) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') v++;
        }
        cout << v << "\n";
    }
}
