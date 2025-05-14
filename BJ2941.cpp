//크로아티아 알파벳 - 실버 5
#include <iostream>
#include <algorithm>
using namespace std;

int main() { 
    string word;
    cin >> word;
    string::iterator it = word.begin();
    int result = 0;
    while (*it) {
        string::iterator nextIt = it + 1;
        switch (*it) {
            case 'c':
                if (*nextIt == '=') {
                    it = it + 2; result++;
                } else if (*nextIt == '-') {
                    it = it + 2; result++;
                } else {
                    it++; result++;
                }
                break;
            case 'd':
                if ((*nextIt == 'z')&&(*(nextIt+1) == '=')) {
                    it = it + 3; result++;
                } else if (*nextIt == '-') {
                    it = it + 2; result++;
                }
                else {
                    it++; result++;
                }
                break;
            case 'l': case 'n':
                if (*nextIt == 'j') {
                    it = it + 2; result++;
                }
                else {
                    it++; result++;
                }
                break;
            case 's': case 'z':
                if(*nextIt == '=') {
                    it = it + 2; result++;
                }
                else {
                    it++; result++;
                }
                break;
            default:
                it++; result++;
                break;
        }
    }
    cout << result;
}

//============================================

//gpt Codes

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    string croatian[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    for (int i = 0; i < 8; i++) {
        size_t pos = 0;
        while ((pos = word.find(croatian[i], pos)) != string::npos) {
            word.replace(pos, croatian[i].length(), "*");  // 임시 문자로 대체
        }
    }

    cout << word.length() << endl;  // 최종 문자열 길이 출력
    return 0;
}
