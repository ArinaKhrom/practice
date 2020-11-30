#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n >= 1) {
        for (int i = 1; i <= n; ++i) {
            cout << "* ";
        }
        --n;
        cout << '\n';
   }
    return 0;

}