#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n <= 3)
        {
            cout << "-1" << endl;
            continue;
        }

        long long start = 0;
        long long end = n - 1;
        long long low = 1;
        long long high = n;
        bool found = false;

        while (start < end)
        {
            if (v[start] == low)
            {
                ++start;
                ++low;
            }
            else if (v[end] == low)
            {
                --end;
                ++low;
            }
            else if (v[start] == high)
            {
                ++start;
                --high;
            }
            else if (v[end] == high)
            {
                --end;
                --high;
            }
            else
            {
                found = true;
                cout << start + 1 << " " << end + 1 << endl;
                break;
            }
        }

        if (!found)
        {
            cout << "-1" << endl;
        }
    }
}
