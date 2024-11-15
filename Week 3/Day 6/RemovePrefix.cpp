#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    while (x--) {
        int y;
        cin >> y;
        int z[y];
        multiset<int> p;

        for (int i = 0; i < y; i++) {
            cin >> z[i];
        }

        int q = 0;
        for (int i = y - 1; i >= 0; i--) {
            if (p.count(z[i]) > 0) {
                q = i + 1;
                break;
            }
            p.insert(z[i]);
        }
        cout << q << endl;
    }
}
