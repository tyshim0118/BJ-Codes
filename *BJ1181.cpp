/*

STD sort()와, 그 활용법, sort의 정렬 규칙을 bool 타입 함수를 정의하여 사용할 수 있음을 알 수 있었다.
sort()는 현업에서도 많이 사용하는 함수라고 한다. 기억해 두는 편이 좋을 것 같다.

*/
//단어 정렬 - 실버 5
#include <algorithm>
#include <iostream>
using namespace std;

bool cmp(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main() {
    int N, ecount = 0;
    cin >> N;
    string W[N];
    for (int i = 0; i < N; i++) {
        string w;
        cin >> w;
        if (!count(W, W + N, w))
            W[i] = w;
        else
            ecount++;
    }
    sort(W, W + N, cmp);
    for (int i = ecount; i < N; i++) {
        cout << W[i] << "\n";
    }
}
