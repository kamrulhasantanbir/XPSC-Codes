#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "";
        char c;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                c = 'a' + ( 10 * (s[i - 2] - '0') + (s[i - 1] - '0') ) - 1;
                i = i - 2;
            }
            else
            {
                c = 'a' + (s[i] - '0') - 1;
            }
            res = c + res;
        }
        cout << res << endl;
    }
}
