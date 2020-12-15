#include <iostream>
using namespace std;

int main() {
	int n, x, sum = 0;
	cin >> n >> x;
	int max = x, min = x;
	for (int i = 1; i < n; i++) {
		cin >> x;
		if (x > max) max = x;
		if (x < min) min = x;
	}
	sum = max + min;
	cout << sum;
	return 0;
}