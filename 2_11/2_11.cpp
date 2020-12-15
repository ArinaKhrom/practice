#include <iostream>
using namespace std;

int main() {
	int n, x;
	setlocale(LC_ALL, "RUS");
	cin >> n >> x;
	int p = x;
	for (int i = 1; i < n; i++) {
		cin >> x;
		if (p == 0) p = x;
	}
	if (p > 0) cout << "Первый ненулевой элемент - положительный";
	else if (p < 0) cout << "Первый ненулевой элемент - отрицательный";
	else if (p == 0) cout << "Все элементы равны 0";
	return 0;
}