#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        long long int q, g = 0, r = 0, x;
        cin >> n >> k >> q;
        for (int p = 0; p < n; p++)
        {
            cin >> x;
            if (x <= q)
            {
                g++;
            }
            else
            {
                g = 0;
            }
            if (g >= k)
            {
                r = r + g - k + 1;
            }
        }
        cout << r << endl;
    }
    return 0;
}
