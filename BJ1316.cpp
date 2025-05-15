//그룹 단어 체커 - 실버 5
#include <iostream>
#include <algorithm>
using namespace std;

int main() { 
    string word;
    int N, group = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> word;
        int wordLength = word.length();
        while (wordLength) {
            string::iterator it = word.begin();
            int lastChar = word.rfind(*it);
            string cutWord = word.substr(0, lastChar + 1);
            int charCount = count(cutWord.begin(), cutWord.end(), *it);
            if (charCount != lastChar + 1) break;
            word.erase(0, lastChar+1);
            wordLength = word.length();
        } 
        if (!wordLength) group++;
    }
    cout << group;
}
