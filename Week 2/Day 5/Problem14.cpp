#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v;
        for (long long x = 0; x < n; x++)
        {
            long long num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        v.push_back(1e9 + 5);
        long long p = v[0];
        long long cur = 1;
        long long ans = 0;
        long long maxRun = 0;
        for (long long x = 1; x <= n; x++)
        {
            if (v[x] == p)
            {
                ++cur;
            }
            else
            {
                if (cur < maxRun)
                {
                    ans += (maxRun - cur);
                    maxRun = cur;
                }
                else
                {
                    maxRun = cur;
                }

                if (v[x] > p + 1)
                {
                    ans += maxRun;
                    maxRun = 0;
                }
                cur = 1;
            }
            p = v[x];
        }
        cout << ans <<endl;
    }
    return 0;
}
