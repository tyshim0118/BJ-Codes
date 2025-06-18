/*

해시 함수

해시 함수에 대해 자료구조 시간에 배운다고 하는데, 나는 자료구조 전공 시간에 해시함수에 대해 배우지 못해 
문제를 푸는 데에 애를 좀 먹었던 것 같다.
해시함수는 임의의 길이를 갖는 데이터를 고정된 길이의 데이터로 매핑하는 함수이다.
해시 함수에 대해서는 유튜브 강의로 별도의 수업을 들었다.

*/

//Hashing - 브론즈 2

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    long long L, hash = 0, modulo = 1;
    string str;
    cin >> L >> str;

    for (int i = 0; i < L; i++) {
        hash = (hash + ((modulo * (str[i] - 'a' + 1)) % 1234567891)) % 1234567891;
        modulo = (modulo * 31) % 1234567891;
    }
    cout << hash;
}
