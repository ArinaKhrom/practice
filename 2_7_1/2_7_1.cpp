#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n; //���-�� ��������� 
    float x; //����� �������
    cin >> n;
    x = sqrt(n);
    if (x * x != n) {
        cout << "�������� ���������� ���������";

    } else {
        for (int i = 1; i <= x; ++i) {
            for (int j = 1; j <= x; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}