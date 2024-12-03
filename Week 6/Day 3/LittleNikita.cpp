#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        bool p = false;

        for (int i = 0; i <= n; ++i) {
            int r = n - i;
            int f = i - (r % 2);

            if (f == m) {
                p = true;
                break;
            }
        }

        if (p) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
