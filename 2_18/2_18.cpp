#include <iostream>
using namespace std;

int main() {
	int n, z, newn = 0;
	cin >> n;
	while (n > 0) {
		z = n % 10;
		newn = newn * 10 + z;
		n = n / 10;
	}
	cout << newn;
	return 0;
}