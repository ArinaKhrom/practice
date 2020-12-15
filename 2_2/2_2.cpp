#include <iostream>
using namespace std;

int main() {
    int n, m, p;
    p = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> m;
        p *= m;
    }

    cout << "p = " << p;
    return 0;
}