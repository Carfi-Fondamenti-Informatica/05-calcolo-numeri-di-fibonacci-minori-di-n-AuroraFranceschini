#include <iostream>
using namespace std;

int main() {
    int n = 0, a = 0, b = 0, c = 0;
    a = 1;
    b = 1;
    cin >> n;
    cout << a << endl;
    cout << b << endl;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
   return 0;
}
