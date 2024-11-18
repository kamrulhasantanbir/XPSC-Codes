
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        int n;
        cin >> a >> b >> n;
        long long int total = b;
        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            if (x > (a - 1))
                total += (a - 1);
            else
                total += x;
        }
        cout << total << endl;
    }
}
