//단어 나누기 - 실버 5

#include <algorithm>
#include <iostream>
using namespace std;

string reverse(string s) {
    string rs;
    string::reverse_iterator it = s.rbegin();
    while (it != s.rend()) {
        rs.push_back(*it);
        it++;
    }
    return rs;
}

int main() {
    string s, s1, s2, s3, rs, result = "~";
    cin >> s;
    int length = s.length();
    for (int i = 1; i < length - 1; i++) {
        for (int j = 1; i + j < length ; j++) {
            s1 = s.substr(0, i);
            s2 = s.substr(i, j);
            s3 = s.substr(i + j, length - i - j);
            s1 = reverse(s1);
            s2 = reverse(s2);
            s3 = reverse(s3);
            rs += s1 + s2 + s3;
            if (result > rs) result = rs;
            rs = "";
        }
    }
    cout << result;
}
