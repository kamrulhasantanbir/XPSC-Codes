
#include <iostream>
using namespace std;

int main() {
    int s, n;
    cin >> s;
    while (s--) {
        cin >> n;
        int e[n * n];

        for (int a = n * n - 1; a >= 0; a--) {
            if (a % 2 == 1) {
                e[a] = n * n - a / 2;
            } else {
                e[a] = 1 + a / 2;
            }
        }

        for (int a = n - 1; a >= 0; a--) {
            for (int k = n - 1; k >= 0; k--) {
                if (a % 2 == 0) {
                    cout << e[n - k - 1 + n * a] << " ";
                } else {
                    cout << e[k + n * a] << " ";
                }
            }
            cout << endl;
        }

        }
}
