#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int g = 0;
        for (int i = 1; i <= n; i++) {
            int v;
            cin >> v;
            int d = abs(i - v);
            while (d && g) {
                g = g % d;
                swap(d, g);
            }
            if (g == 0) {
                g = d;
            }
        }
        cout << g << endl;
    }
}
