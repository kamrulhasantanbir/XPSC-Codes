#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int s = 0, m = -1, c = 0, r = 0;
        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            m = max(m, x);
            s += x;
            r = s - m;
            if (r == m)
            {
                c++;
            }
        }
        cout << c << "\n";
    }
}
