
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        string v = s;
        reverse(v.begin(), v.end());
        string b = v + s;
        string c = v;
        if (n%2==0 && s < b)
        {
            cout << s << endl;
        }
        else
        {
            if(n%2==0)
            {
                cout << b << endl;
            }
            else
            {
                cout<<c<<endl;
            }
        }
    }
}
