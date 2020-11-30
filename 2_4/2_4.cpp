#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int space = n / 2;
    int star = 1;
    for (int i = 0; i < (n + 1) / 2; ++i) {
        for (int j = 0; j < space; ++j) {
            cout << ' ';
        }
        space--;
        for (int j = 0; j < star; ++j) {
            cout << '*';
        }
        star += 2;
        cout << '\n';
    }
    return 0;
    // �� ������������ �������� �������� n - ����� ��������� ������������.
    // �� ������� n - �������� ����� �����.
    // ����� �� ������ ������ ������ ������������ - ���������� �����
    // �� ������� ((n +1)/2).
    // ��� ������� ������ ��� ����� ����� � ������ ����, ������� ����� ���������� ������ ������������.
    // ������ ���� ����� ���� � ����� � ������� �� 1 �� ���������� �����,
    // ��������� �� �������.
    // � ������ ����� �� ������ ������ ����� ����, �������, � ���������� ����� ������,
    // ����� ������ ������ ���������� ��������.
    //������������ ���������� �������� ��������� �� ������� (n/2). 
    // ������ ���� ����� ���� � ����� � ������� �� 1 �� ���������� ������������� ���������� ��������.
    // � ������ ��������� ����� ���������� �������� ����� �����������.
    // ����� ������� ����, � ������� ����� ��������� "*".
    // C ������ ��������� ���������� ��������� ����� ��������� �� 2.
    // ���� ���� ����������� ������� ���, ������� ��� ��������� ����� ((n +1)/2).
}