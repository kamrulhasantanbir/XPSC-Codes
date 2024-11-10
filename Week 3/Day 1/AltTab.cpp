#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<string> v;
    string res;

    unordered_map<string, int> m;
    for(int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for(int i = t - 1; i >= 0; i--)
    {
        if(m[v[i]] == 0)
        {
            int sz = v[i].size();
            res += v[i].substr(sz - 2);
        }
        m[v[i]]++;
    }

    cout << res << endl;
    return 0;
}
