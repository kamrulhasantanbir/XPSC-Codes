
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = -k - 1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                l = i;
            } else if (i <= l + k) {
                s[i] = '2';
            }
        }

        int c = 0;
        l = n + k;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                l = i;
            } else if (i + k < l && s[i] == '0') {
                c++;
                l = i;
            }
        }

        cout << c << endl;
    }
    return 0;
}
