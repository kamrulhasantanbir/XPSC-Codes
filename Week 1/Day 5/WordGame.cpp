#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        const int m = 3;
        cin >> n;

        map<string, vector<int>> mp;

        for (int p = 1; p <= m; ++p) {
            for (int j = 0; j < n; ++j) {
                string w;
                cin >> w;
                mp[w].push_back(p);
            }
        }

        vector<int> ans(m + 1);

        for (auto [w, o] : mp) {
            int c = o.size();
            if (c == 1) {
                ans[o[0]] += 3;
            } else if (c == 2) {
                ans[o[0]]++;
                ans[o[1]]++;
            }
        }

        for (int p = 1; p <= m; ++p) {
            cout << ans[p] << " ";
        }
        cout << endl;
    }

    return 0;
}
