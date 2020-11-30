#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    if (b != 0) {
        cout << a / b;
    } else {
        cout << "no";
    }
    return 0;
}
