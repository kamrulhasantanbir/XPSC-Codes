#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) {
        int n, k;
        cin >> n >> k; 
        vector<int> a(n);
        map<int, int> m;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            m[a[i]]++;
        }
        set<int> s(a.begin(), a.end());
        vector<int> u(s.begin(), s.end());

        int l = -1, r = -1, mx = -1;
        for (int i = 0; i < u.size(); ++i) {
            if (m[u[i]] >= k) {
                int cnt = 1, j;
                for (j = i + 1; j < u.size(); ++j) {
                    if (m[u[i] + j - i] < k) {
                        break;
                    }
                    if (m[u[j]] >= k) {
                        cnt++;
                    } else {
                        break;
                    }
                }
                if (cnt > mx) {
                    mx = cnt;
                    l = u[i];
                    r = u[j - 1];
                }
                i = j - 1;
            }
        }
        if (mx == -1) {
            cout << -1 << endl;
        } else {
            cout << l << ' ' << r << endl;
        }
    }
    return 0;
}
