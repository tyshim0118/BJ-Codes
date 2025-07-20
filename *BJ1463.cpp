/*

이 문제는 DP, 즉 동적 프로그래밍(Dynamic Programming)을 이용하는 문제였다.
난 부끄럽게도 동적 프로그래밍에 대해 전혀 알지 못하는 상태였고, 이 문제는 인공지능의 도움을 받아 해결하였다.

동적 프로그래밍은 이전의 값을 저장해두어 문제를 최적화하는 것이 핵심이라고 할 수 있겠다.

해당 알고리즘은 맨 밑, dp[1]부터 시작하여 작은 수부터 천천히 채워나가는 bottom_up 방식을 사용한다.

문제에서 "최소/최대" or "방법의 수"를 물어보면 DP를 고려하도록 하자.
*/


//1로 만들기 - 실버 3

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> dp;
    dp.push_back(0); // dp[0]
    dp.push_back(0); // dp[1]
    for (int i = 1; i <= N; i++) {
        dp.push_back(dp[i - 1] + 1);  // 1을 빼는 연산
        if (!(i % 2)) dp[i] = min(dp[i], dp[i / 2] + 1); //1을 뺀거랑 2로 나누는 것 중 작은 것을 택 1
        if (!(i % 3)) dp[i] = min(dp[i], dp[i / 3] + 1); //1을 뺀거랑 3으로 나누는 것 중 작은 것을 택 1
    }
    cout << dp[N] << '\n';
}

//1로 만들기 - Top_Down

#include <bits/stdc++.h>
using namespace std;

vector<int> dp;  // dp[x] = x를 1로 만드는 최소 연산 횟수. 미계산은 -1.

int solve(int x) {
    if (x == 1) return 0;
    int &ret = dp[x];
    if (ret != -1) return ret;  // 이미 계산된 값이면 바로 반환

    // 기본: 1을 빼는 연산
    ret = solve(x - 1) + 1;

    // 2로 나누어 떨어질 때
    if (x % 2 == 0)
        ret = min(ret, solve(x / 2) + 1);

    // 3으로 나누어 떨어질 때
    if (x % 3 == 0)
        ret = min(ret, solve(x / 3) + 1);

    return ret;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    dp.assign(N + 1, -1);
    dp[1] = 0;  // 기저값 명시 (없어도 solve에서 처리되지만 안전하게)

    cout << solve(N) << '\n';
    return 0;
}
