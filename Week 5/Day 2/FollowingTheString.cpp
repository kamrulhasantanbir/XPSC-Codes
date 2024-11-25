#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> tr(n);
        for (int i = 0; i < n; i++) {
            cin >> tr[i];
        }

        string res;
        char ch = 'a';
        vector<int> cnt(26, 0);

        for (int i = 0; i < n; i++) {
            if (tr[i] == 0) {
                while (cnt[ch - 'a'] > 0) {
                    ch++;
                }
                res += ch;
                cnt[ch - 'a']++;
            } else {
                for (int j = 0; j < 26; j++) {
                    if (cnt[j] == tr[i]) {
                        res += (char)('a' + j);
                        cnt[j]++;
                        break;
                    }
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}

