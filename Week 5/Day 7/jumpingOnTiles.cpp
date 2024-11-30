#include<bits/stdc++.h>
using namespace std;
pair<char, int> pi[200001];

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        char a = s[0];
        char b = s[n - 1];
        for (int i = 0; i < n; i++) {
            pi[i].first = s[i];
            pi[i].second = i + 1;
        }
        sort(pi + 1, pi + n - 1);
        vector<int> ans;
        bool reversed = false;
        if (a > b) {
            swap(a, b);
            reversed = true;
        }
        for (int i = 0; i < n - 1; i++) {
            if (pi[i].first >= a && pi[i].first <= b) {
                ans.push_back(pi[i].second);
            }
        }
        int cost = b - a;
        int step = 1 + ans.size();
        cout << cost << " " << step << endl;
        cout << "1 ";
        if (reversed) {
            reverse(ans.begin(), ans.end());
        }
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] != 1)
                cout << ans[i] << " ";
        }
        cout << n << endl;
    }
}
