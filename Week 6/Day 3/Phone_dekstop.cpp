#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int h = (b + 1) / 2;
        int d = 15 * h - 4 * b;

        while (a > d) {
            h++;
            d += 15;
        }

        cout << h << endl;
    }
}
