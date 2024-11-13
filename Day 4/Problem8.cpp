#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long int> a(n);
    vector<long long int> b(m);

    for (int x = 0; x < n; ++x) {
        cin >> a[x];
    }
    for (int y = 0; y < m; ++y) {
        cin >> b[y];
    }

    int p1 = 0, p2 = 0;
    vector<long long int> res;

    while (p1 < n && p2 < m) {
        if (a[p1] <= b[p2]) {
            res.push_back(a[p1]);
            p1++;
        } else {
            res.push_back(b[p2]);
            p2++;
        }
    }

    while (p1 < n) {
        res.push_back(a[p1]);
        p1++;
    }

    while (p2 < m) {
        res.push_back(b[p2]);
        p2++;
    }

    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
