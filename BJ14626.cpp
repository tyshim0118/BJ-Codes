//ISBN - 브론즈 1

#include <iostream>
#include <string>
using namespace std;

int main() {
    string ISBN;
    cin >> ISBN;
    int dmgI, sum = 0;
    for (int i = 0; i < 13; i++) {
        if (ISBN[i] == '*') {
            dmgI = i;
            continue;
        }
        if (i % 2)
            sum += 3 * (ISBN[i] - '0');
        else
            sum += ISBN[i] - '0';
    }
    int dmgN = 0;
    if (dmgI % 2) {
        while ((sum + 3 * dmgN) % 10) dmgN++;
    } else {
        while ((sum + dmgN) % 10) dmgN++;
    }
    cout << dmgN << "\n";
}
