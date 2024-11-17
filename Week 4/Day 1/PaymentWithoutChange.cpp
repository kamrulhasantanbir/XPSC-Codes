#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int a, b, n, S;
        cin >> a >> b >> n >> S;

        int r1 = S / n;
        int r2 = S % n;

        if(r1 <= a && r2 <= b) {
            cout << "YES" << endl;
        } else {
            if(r1 > a) {
                r2 = S - a * n;
                if(r2 <= b) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
