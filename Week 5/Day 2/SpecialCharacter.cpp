#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "NO"<<endl;
        }
        else
        {
            cout << "YES"<<endl;
            for (long i = 0; i < n/2; i++)
            {
                if (i % 2 == 0)
                {
                    cout << "TT";
                }
                else
                {
                    cout << "HH";
                }
            }
            cout << endl;
        }
    }
}
