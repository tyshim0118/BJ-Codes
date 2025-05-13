#include <iostream>
using namespace std;

struct Word {
    char alphabet;
    int count;
    Word(char, int);
    void addAlphabet(char);
};

Word::Word(char c = 0, int i = 0) : alphabet(c), count(i) {}
void Word::addAlphabet(char c) { 
    alphabet = c;
    count++;
}

int main() {
    string str;
    cin >> str;
    Word *wordArray = new Word[26];
    string::iterator it = str.begin();
    int alphaIndex;
    
    while (*it) {
        *it = toupper(*it);
        alphaIndex = *it - 'A';
        wordArray[alphaIndex].addAlphabet(*it);
        it++;
    }
    
    int max = wordArray[0].count;
    char maxAlphabet = wordArray[0].alphabet;
    
    for (int i = 1; i < 26; i++) {
        if (wordArray[i].count > max){ 
            maxAlphabet = wordArray[i].alphabet;    
            max = wordArray[i].count;
        }
        else if (wordArray[i].count == max)
            maxAlphabet = '?';
    }
    cout << maxAlphabet;
}
