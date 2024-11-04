
#include <bits/stdc++.h>
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
        map<int, int> freq;
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            freq[val]++;
        }

        priority_queue<int> pq;
        for (auto [k, v] : freq)
        {
            pq.push(v);
        }

        while (!pq.empty())
        {
            if (pq.size() < 2) break;
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            if (--a > 0) pq.push(a);
            if (--b > 0) pq.push(b);
        }

        int res = 0;
        while (!pq.empty())
        {
            res += pq.top();
            pq.pop();
        }

        cout << res << '\n';
    }

    return 0;
}

