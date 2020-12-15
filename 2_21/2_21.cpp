#include <iostream>
using namespace std;

int main() {
	int x, t;
	bool flag1 = false;
	bool flag2 = true;
	cin >> x;
	if (x == 0)
		flag1 = true;

	while (!flag1) {
		cin >> t;
		if (t == 0) flag1 = true;
		if (t < x && t != 0) flag2 = false;
		x = t;
	}
	if (flag2) cout << "Yes";
	else cout << "No";

	return 0;
}