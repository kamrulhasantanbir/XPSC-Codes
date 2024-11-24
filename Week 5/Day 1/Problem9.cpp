#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int > sum(n + 1);
        sum [0] = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> sum[i];
            sum[i] += sum[i - 1];
        }
        string s;
        cin >> s;
        long long int total = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            while (l < n && s[l] == 'R')
            {
                l++;
            }
            while (r >= 0 && s[r] == 'L')
            {
                r--;
            }

            if (l < r)
            {
                total += sum[r + 1] - sum[l];
                l++;
                r--;
            }
        }

        cout << total << endl;
    }
    return 0;
}
