//나머지 - 브론즈 2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, remainder42[10] = { 0 }, answer = 0, checkRemainder[10];
	fill(checkRemainder, checkRemainder + 10, 43);
	for (int i = 0; i < 10; i++) {
		cin >> N;
		remainder42[i] = N % 42;
	}
	for (int i = 0; i < 10; i++) {
		int j = i + 1;
		int k = 0;
		while (j < 11) {
			if (count(checkRemainder, checkRemainder + 10, remainder42[i])) { 
				k++; break; 
			}
			if ((remainder42[i] == remainder42[j])) {
				answer++; 
				checkRemainder[i] = remainder42[i]; 
				break; 
			}
			else j++;
		}
		if (j == 11 && !k) answer++;
	}
	cout << answer;
}
