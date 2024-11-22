
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long m;
    cin >> n >> m;
    long long arr[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int l = 0, r = 0, maxI = n + 1;
    while (r < n) {
        sum += arr[r];
        while (sum >= m) {
            maxI = min(maxI, r - l + 1);
            sum -= arr[l];
            l++;
        }
        r++;
    }

    if (maxI == n + 1)
    {

     cout << "-1" << endl;
    }
    else
    {
        cout << maxI << endl;
    }
}
