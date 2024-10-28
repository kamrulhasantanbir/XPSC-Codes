
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, T;
    cin >> A >> B >> T;

    if (A > T) {
        cout << "0";
    } else {
        cout << (T / A) * B;
    }

    return 0;
}
