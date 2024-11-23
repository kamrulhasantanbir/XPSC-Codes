#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long s;
    cin >> n >> s;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long sum = 0, count = 0;
    int l = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum >= s) {
            count += n - r;
            sum -= a[l];
            l++;
        }
    }
    cout << count<<endl;
    return 0;
}
