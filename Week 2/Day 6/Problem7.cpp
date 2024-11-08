#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        int n, p;
        cin >> n;
        vector<int> idx(n);
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            cin >> p;
            idx[p - 1] = i;
        }
        string votes;
        cin >> votes;
        int cnt = 1;
        for (char ch = '0'; ch <= '1'; ch++) {
            for (int i = 0; i < n; i++) {
                if (votes[idx[i]] == ch) {
                    res[idx[i]] = cnt++;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
