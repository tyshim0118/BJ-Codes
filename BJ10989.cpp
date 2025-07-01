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
