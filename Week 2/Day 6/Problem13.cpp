#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int n, m;
        cin >> n >> m;
        char s[n];

        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        set<int> st1;
        string st2;

        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            st1.insert(x);
        }

        cin>>st2;
        sort(st2.begin(),st2.end());

        auto it1 = st1.begin();
        int counter=0;
        while (it1 != st1.end() ) {
            int x = *it1;
            char y = st2[counter];
            s[x - 1] = y;
            it1++;
            counter++;
        }

        for (int i = 0; i < n; i++) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
