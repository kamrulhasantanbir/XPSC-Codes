#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> p(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            int isW = (s[i - 1] == 'W');
            p[i] = p[i - 1] + isW;
        }

        int min_ops = INT_MAX;

        for (int i = k; i <= n; i++) {
            int current_ops = p[i] - p[i - k];
            if (current_ops < min_ops) {
                min_ops = current_ops;
            }
        }

        cout << min_ops << endl;
    }

    return 0;
}
