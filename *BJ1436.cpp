/*

문자열에서 문자열이 있는지 없는지 확인을 할 때는 count()가 아니라 find()와 string::npos를 사용토록 하자.
ex) 대상.find(목표 string)
find()는 대상 string에서 찾고자 하는 목표 string이 인덱스 어디에 있는지 반환한다. 
예를 들어, string str = "ABCDFEFFEKG"이고, str.find("FF")를 실행하면, 6을 반환한다.
만약 대상 string에 목표 string이 없다면, string::npos를 반환한다. 
이를 이용해 대상 string에 목표 string이 있는지 없는지를 판별할 수 있다.

*/

//영화감독 숌 - 실버 5

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, i = 0, test = 0;
    string not6;
    cin >> N;
    while (i < N) {
        test++;
        not6 = to_string(test);
        if(not6.find("666") != string::npos) i++;
    }
    cout << test;
}
