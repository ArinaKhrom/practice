#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n < 5) {
        n = n * 3;
    } else {
        if (n > 7) {
            n = n + 3;
        } else {
            n = n % 10;
        }
    }

    cout << "n = " << n;

    return 0;
}