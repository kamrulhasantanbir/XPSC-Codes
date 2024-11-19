#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        long long a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] += (i + 1);
        }

        sort(a, a + n);

        int maxT = 0;
        for (int i = 0; i < n; i++) {
            if (c >= a[i]) {
                c -= a[i];
                maxT++;
            } else {
                break;
            }
        }

        cout << maxT << endl;
    }
    return 0;
}
