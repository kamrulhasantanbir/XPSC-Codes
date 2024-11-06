
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    for(long i = 0; i < t; i++)
    {
        long n, m, q;
        cin >> n >> m >> q;
        vector<long> arr(m);
        for(long j = 0; j < m; j++)
        {
            cin >> arr[j];
        }
        sort(arr.begin(), arr.end());
        for(long k = 0; k < q; k++)
        {
            long x;
            cin >> x;
            long idx = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
            long result = 0;
            if(!idx)
            {
                result = arr[0] - 1;
            }
            else if(idx == m)
            {
                result = n - arr.back();
            }
            else
            {
                result = (arr[idx] - arr[idx - 1]) / 2;
            }
            cout << result << endl;
        }
    }
}
