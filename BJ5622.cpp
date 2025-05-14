//다이얼 - 브론즈 2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string A;
    cin >> A;
    int ALength = A.length();
    int result = 0;
    for ( int i = 0 ; i < ALength ; i++) {
        char alphabet = A[i];
        if (alphabet >= 'A' && alphabet <= 'C') result += 3;
        else if (alphabet >= 'D' && alphabet <= 'F') result += 4;
        else if (alphabet >= 'G' && alphabet <= 'I') result += 5;
        else if (alphabet >= 'J' && alphabet <= 'L') result += 6;
        else if (alphabet >= 'M' && alphabet <= 'O') result += 7;
        else if (alphabet >= 'P' && alphabet <= 'S') result += 8;
        else if (alphabet >= 'T' && alphabet <= 'V') result += 9;
        else result += 10;
    }
    cout << result;
}
