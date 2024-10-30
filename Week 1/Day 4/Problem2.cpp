#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        vector<char> C(n);
        int l = -1;
        int h = -1;

        for (int i = 0; i < n; i++) {
            cin >> C[i];
            if (C[i] == 'B' && l == -1) {
                l = i;
            }
            if (C[i] == 'B') {
                h = i;
            }
        }

        if (l != -1 && h != -1) {
            cout << h - l + 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
