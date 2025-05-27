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
