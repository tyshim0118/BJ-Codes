//과제 안 내신 분..? - 브론즈 3
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int submit[30] = { 0 }, N;
    for (int i = 0; i < 28; i++) {
        cin >> N;
        submit[i] = N;
    }
    int i = 1;
    int p = count(submit, submit + 30, 2);
    for (int j = 0; j < 2; j++) {
        while (count(submit, submit + 30, i)) {
            i++;
        } cout << i << endl; submit[28] = i;
    }
}
