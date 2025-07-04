#include <algorithm>
#include <iostream>
using namespace std;

struct member {
    int age, order;
    string name;
};

bool cmp(member p1, member p2) {
    if (p1.age == p2.age)
        return p1.order < p2.order;
    else
        return p1.age < p2.age;
}

int main() {
    int N;
    cin >> N;
    vector<member> v;
    for (int i = 0; i < N; i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({age, i, name});
    }
    sort(v.begin(), v.end(), cmp);
    for (member m : v) cout << m.age << ' ' << m.name << '\n';
}
