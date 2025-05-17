//세로읽기 - 브론즈 1
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string array[5];
    for (int i = 0 ; i < 5 ; i++) {
        cin >> array[i];
    }
    for (int j = 0 ; j < 15 ; j++) {
        for (int i = 0; i < 5 ; i++) {
            if (j < array[i].length()) cout << array[i][j];
        }
    }
}
