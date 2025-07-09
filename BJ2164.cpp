#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

int main() {
    queue<int> q;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (q.size() != 1) {
        q.pop();
        if (q.size() == 1) break;
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
    cout << q.front();
}
