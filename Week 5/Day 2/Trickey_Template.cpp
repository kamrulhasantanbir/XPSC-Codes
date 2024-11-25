
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        string x, y, z;
        cin >> x >> y >> z;
        bool flag = false;
        for(long i = 0; i < n; i++)
        {
            if(z[i] != x[i] && z[i] != y[i])
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
