#include <iostream>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	int max = x;
	for (int i = 1; i < n; i++) {
		cin >> x;
		if (x > max) max = x;
	}
	cout << max;
	return 0;
}