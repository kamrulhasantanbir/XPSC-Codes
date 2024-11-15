

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int b;
        cin >> b;

        string c;
        cin >> c;

        vector<int> d(b, 0);
        long long int e = 0;

        for (int f = 0; f < b; f++) {
            int g;
            if (c[f] == 'L') {
                g = f;
            } else {
                g = b - f - 1;
            }

            int h;
            if (f > (b - f - 1)) {
                h = f;
            } else {
                h = b - f - 1;
            }

            e += g;
            int i = h - g;
            d[f] = i;
        }

        sort(d.rbegin(), d.rend());

        for (int i = 0; i < b; i++) {
            e += d[i];
            cout << e << " ";
        }
        cout << endl;
    }
}
