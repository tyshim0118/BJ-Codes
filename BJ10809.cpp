//알파벳 찾기 - 브론즈 2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;
    int *alphabetArray = new int[26];
    fill(alphabetArray,alphabetArray+26,-1);
    int stringLength = S.length();
    for (int i = 0 ; i < stringLength ; i++ ) {
        int alphabetNumber = int(S[i]) - 97;
        if (alphabetArray[alphabetNumber] == -1) 
            alphabetArray[alphabetNumber] = i;
    }
    for (int i = 0 ; i < 26; i++) 
        cout << alphabetArray[i] << " ";
}
