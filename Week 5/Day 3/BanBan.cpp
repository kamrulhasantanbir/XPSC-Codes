
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        cout << (n + 1) / 2 << endl;

        int l = 1, r = 3 * n;
        for (int i = 0; i < (n + 1) / 2; i++) {
            cout << l << " " << r << endl;
            l += 3;
            r -= 3;
        }
    }
}
