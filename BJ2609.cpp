//최대공약수와 최소공배수 - 브론즈 1

#include <iostream>
using namespace std;

int main() {
    int A, B, GCD, LCM, temp = 1;
    cin >> A >> B;
    LCM = A > B ? A : B;
    while (temp < A && temp < B) {
        if (!(A % temp) && !(B % temp)) GCD = temp;
        temp++;
    }
    while ((LCM % A) || (LCM % B)) {LCM++;}
    cout << GCD << "\n" << LCM;
}
