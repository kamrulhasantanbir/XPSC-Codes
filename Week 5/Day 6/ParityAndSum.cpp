#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> e;

        int m = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2) {
                if (x > m) {
                    m = x;
                }
            } else {
                e.push_back(x);
            }
        }

        if (e.size() == n) {
            cout << "0"<<endl;
            continue;
        }

        sort(e.begin(), e.end());
        int c = e.size();

        for (int i = 0; i < e.size(); i++) {
            if (m > e.back()) {
                break;
            } else if (m < e[i]) {
                c++;
                break;
            } else {
                m += e[i];
            }
        }

        cout << c << endl;
    }
}
