#include <iostream>
using namespace std;

int main() {
	int n, z, p;
	bool flag = false;
	cin >> n >> z;
	while (n > 0) {
		p = n % 10;
		n /= 10;
		if (p == z) {
			flag = true;
			break;
		}
	}
	if (flag) cout << "Yes";
	else cout << "No";

	return 0;
}