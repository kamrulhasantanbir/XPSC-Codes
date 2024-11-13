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

        int op = 0,i = 0;

        while (i < n) {
            if (s[i] == 'B') {
                op++;
                i += k;
            } else {
                i++;
            }
        }

        cout << op << endl;
    }

    return 0;
}
