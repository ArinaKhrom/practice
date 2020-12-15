#include <iostream>
using namespace std;

int main() {
    int max, a, b, c; 
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            max = a;
        } else {
            max = c;
        }
    } else {
        if (b > c) {
            max = b;
        } else {
            max = c;
        }
    }

    cout << "max = " << max;
    
    return 0;

    // Чтобы найти максимальное число из трех, вводимых пользователем, 
    // мы должны найти максимальное из первых двух, 
    // а затем сравнить найденный максимум с третим числом, 
    // максимальное из них будет искомым максимумом.
}