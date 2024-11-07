#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k= 0; k < t; k++)
    {
        long long n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        if(c=='g')
        {
            cout<<"0"<<endl;
            continue;
        }
        s += s;
        long long cnt = 0, mx = 0;
        for (long long i = 0; i < s.length(); i++)
        {
            if (s[i] == c)
            {
                cnt = 0;
                for (long long j = i + 1; j < s.size() && s[j] != 'g'; j++)
                {
                    cnt++;
                    i = j;
                }
                mx = max(mx, cnt);
            }
        }
        cout << mx+1 << endl;
    }
    return 0;
}
