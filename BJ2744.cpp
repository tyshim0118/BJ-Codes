//대소문자 바꾸기 - 브론즈 5

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (char c : s) {
        if (c >= 'a' && c <= 'z') c = toupper(c);
        else c = tolower(c);
        cout << c;
    }
}
