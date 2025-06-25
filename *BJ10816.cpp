/*

이번 문제는 unordered_map을 사용하는 문제였다. unordered_map은 해시 테이블 기반의 key와 value를 가지는 자료구조이다. key는 first로, value는 second로 접근하는데, 이 때는 iterator를 사용해서 it->first, it->second와 관련된 형태로 접근해야한다.

unordered_map은 그냥 map과 달리 해시테이블 기반의 map이기 때문에 이진트리의 형식을 기본적으로 사용하는 그냥 Map에 비해 삽입, 삭제, 원소 접근 등이 빠르다. 초기화나 선언, 메소드 등은 map과 비슷하므로 따로 적진 않겠다.

*/

//숫자 카드 2 - 실버 4

#include <algorithm>
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int, int> cards;
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int c;
        cin >> c;
        cards[c]++;
        // cards의 key가 c인 값이 있으면 value를 1 올림.
        // 없으면 새로 추가하고 value를 1로 바꿈
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        int f;
        cin >> f;
        auto findIt = cards.find(f);
        if (findIt != cards.end())
            cout << findIt->second;
        else
            cout << 0;
        cout << " ";
    }
}
