#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int p = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) {
                p = i;
            }
        }
        bool s = true;
        int prev = a[p];
        for (int i = 1; s == true && i < n; i++) {
            int d = (i + p) % n;
            if (prev > a[d]) {
                s = false;
            }
            prev = a[d];
        }
        if (s) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}
