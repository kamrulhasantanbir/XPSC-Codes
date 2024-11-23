#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int ops = -1;
        int a[n];
        int total = 0;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];

            while (total > s)
            {
                total -= a[j];
                j++;
            }
            if (total == s)
            {
                ops = max(ops, i - j + 1);
            }
        }
        int ans = n - ops;
        if ( ans > n || ops < s)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}
