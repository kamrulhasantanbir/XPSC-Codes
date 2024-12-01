
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<long long, int> f;
        for(int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            f[x]++;
        }
        if(f.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int mx = 0;
        int r = 0;
        for(auto it = f.begin(); it != f.end(); it++)
        {
            if(it->second > mx)
            {
                mx = it->second;
            }
        }
        while(mx < n)
        {
            r += min(n - mx, mx) + 1;
            mx += min(n - mx, mx);
        }
        cout << r << endl;
    }
}
