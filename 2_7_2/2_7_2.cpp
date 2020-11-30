#include <iostream>
#include <math.h>
using namespace std;

int n; //сторона квадрата
int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << "* ";
        }
      
        cout << '\n';
    }
    return 0;
}