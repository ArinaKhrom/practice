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
	if (p > 0) cout << "������ ��������� ������� - �������������";
	else if (p < 0) cout << "������ ��������� ������� - �������������";
	else if (p == 0) cout << "��� �������� ����� 0";
	return 0;
}