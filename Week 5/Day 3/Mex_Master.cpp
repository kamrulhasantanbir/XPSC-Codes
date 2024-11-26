
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count_zero = 0, count_one = 0, count_other = 0;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num == 0) count_zero++;
            else if (num == 1) count_one++;
            else count_other++;
        }

        int result = 0;
        if (count_zero > (n + 1) / 2)
        {
            if (count_one == 0 || count_other > 0)
            {
                result = 1;
            }
            else
            {
                result = 2;
            }
        }

        cout << result << endl;
    }
}
