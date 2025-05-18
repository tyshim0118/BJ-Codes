//색종이 - 실버 5
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    size_t paper[100][100] = {0,}, numOfCP, x, y, xDis = 10, yDis = 10, area = 0;
    cin >> numOfCP;
    for (size_t i = 0; i < numOfCP; i++) {
        cin >> x >> y;
        if (x > 90) xDis = 100 - x;
        if (y > 90) yDis = 100 - y;

        for (size_t j = x ; j < x + xDis  ; j++) {
            for (size_t k = y; k < y + yDis ; k++) {
                paper[j][k] = 1;
            }
        }   
    }
    for (size_t i = 0; i < 100; i++) {
        for (size_t j = 0; j < 100; j++) {
            if (paper[i][j]) area++;
        }
    }
    cout << area;
}
