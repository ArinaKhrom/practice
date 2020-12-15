#include <iostream>
using namespace std;

int main() {
	int n;
	setlocale(LC_ALL, "RUS");
	cin >> n;
	if (n <= 2) {
		cout << "Не подходит по условию";
	}
	else {
		int z = 1;  //кол-во звездочек 

		while (z <= n) {
			for (int i = 1; i <= z; i++) {
				cout << "* ";
			}
			z++;
			cout << endl;
		}
	}
	return 0;
}