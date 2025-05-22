//달팽이는 올라가고 싶다 - 브론즈 1
#include <iostream>
using namespace std;

int main() {
    double A, B, V, days;
    cin >> A >> B >> V;
    V -= B;
    days = V / (A - B);
    if (days > int(days)) days++;
    cout << int(days);
}
