/*

계수 정렬(Counting Sort)의 활용에 관한 문제였다. 카운팅 정렬은 각 요소의 배열 등장 횟수를 count해 누적합으로 나타내는 배열을 만든 뒤, 그 누적합으로 요소들의 index를 알아내 작은 숫자 순서대로 정렬하는 기법이다.

흔히 사용하는 퀵 정렬처럼 비교 정렬이 아니기 때문에 시간 복잡도가 O(n+k)이다. k는 입력되는 요소의 최댓값으로, 따라서 카운팅 정렬은 입력되는 요소의 개수가 n보다 현저히 작을수록 퀵 정렬에 비해 우위를 가진다.

자세한 설명은 링크(https://10000cow.tistory.com/entry/정렬-8계수-정렬Counting-Sort)를 참조하도록 하자.
*/

//수 정렬하기 3 - 브론즈 1

#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> nums;
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int c;
        cin >> c;
        nums[c]++;
    }
    auto it = nums.begin();
    while (it != nums.end()) {
        for (int i = 0; i < it->second; i++) {
            cout << it->first << '\n';
        }
        it++;
    }
}
