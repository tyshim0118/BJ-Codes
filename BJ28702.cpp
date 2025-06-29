//FizzBuzz - 브론즈 1

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string A, B, C;
    int ans;
    cin >> A >> B >> C;
    if (!(A == "FizzBuzz" || A == "Fizz" || A == "Buzz")) {
        ans = stoi(A) + 3;
    } else if (!(B == "FizzBuzz" || B == "Fizz" || B == "Buzz")) {
        ans = stoi(B) + 2;
    } else if (!(C == "FizzBuzz" || C == "Fizz" || C == "Buzz")) {
        ans = stoi(C) + 1;
    }

    if (!(ans % 15)) {
        cout << "FizzBuzz";
    } else if (!(ans % 3)) {
        cout << "Fizz";
    } else if (!(ans % 5)) {
        cout << "Buzz";
    } else
        cout << ans;
}
