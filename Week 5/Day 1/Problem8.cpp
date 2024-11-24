
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long int k;
        cin >> n >> k;

        vector<int> a(n);
        vector<long long int> h(n);
        int minA=INT_MAX;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            minA=min(minA,a[i]);
        }
        for (int i = 0; i < n; ++i) {
            cin >> h[i];
        }
        long long int sum = a[0];
        int ans;
        if(minA<=k)
        ans = 1;
        else
        ans = 0;
        int l = 0;

        for (int r = 1; r < n; r++) {
            sum += a[r];

            while (sum > k) {
                sum -= a[l];
                l++;
            }

            if ( h[r - 1] % h[r] == 0) {
                ans = max(ans, r - l + 1);
            }
            else {
                l = r;
                sum = a[r];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
