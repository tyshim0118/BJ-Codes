//최댓값 - 브론즈 3
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[9][9], max = 0, mr = 1, mc = 1;
    for (int i = 0; i < 9 ; i++) {
        for (int j = 0; j < 9 ; j++) {
            cin >> array[i][j];
            if (array[i][j] > max) {
                max = array[i][j];
                mr = i+1;
                mc = j+1;
            }
        }
    }
    cout << max << endl << mr << " " << mc;
}
