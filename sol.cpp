#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	// just check whose value less than 'i'
	for (int i = 1; ; i++) {
		if (i % 2 == 1) {
			// if i mod 2 == 1, then it's Vladik's turn
			if (i > a) {
				// check if i > a, then the answer is Vladik
				cout << "Vladik\n";
				break;
			} else {
				// otherwise, subtract i from a
				a -= i;
			}
		} else {
			// if i mod 2 == 0, then it's Valera's turn
			if (i > b) {
				// check if i > b, then the answer is Valera
				cout << "Valera\n";
				break;
			} else {
				// otherwise, subtract i from b
				b -= i;
			}
		}
	}
	return 0; 
}
