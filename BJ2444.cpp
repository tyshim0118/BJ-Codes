//별 찍기 - 7 - 브론즈 3
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, stars = 1, spaces, turnSwitch = 0;
    cin >> N;
    spaces = N - 1;
    for (int i = 0 ; i < 2 * N - 1 ; i++) {
        for (int j = 0 ; j < spaces ; j++ ) cout << " ";
        for (int k = 0 ; k < stars ; k++ ) cout << "*";
        
        switch (turnSwitch) {
            case 0:
                stars = stars + 2;
                spaces--;
                if (!spaces) turnSwitch = 1;
                break;
            default: //switch == 1
                stars = stars - 2;
                spaces++;
        }
        cout << endl;
    }
}
