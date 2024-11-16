#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        int total = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int current = 0;

                for (int k = i, l = j; k >= 0 && l >= 0; k--, l--) {
                    current += arr[k][l];
                }

                for (int k = i, l = j; k >= 0 && l < m; k--, l++) {
                    current += arr[k][l];
                }

                for (int k = i, l = j; k < n && l >= 0; k++, l--) {
                    current += arr[k][l];
                }

                for (int k = i, l = j; k < n && l < m; k++, l++) {
                    current += arr[k][l];
                }

                current -= 3 * arr[i][j];

                total = max(total, current);
            }
        }

        cout << total << endl;
    }
}
