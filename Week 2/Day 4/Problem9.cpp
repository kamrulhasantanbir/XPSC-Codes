#include <bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    for(long i = 0; i < t; i++)
    {
        long n;
        cin >> n;
        priority_queue<long> pq;
        long long total = 0;
        for(long j = 0; j < n; j++)
        {
            long long val;
            cin >> val;
            if(val) pq.push(val);
            else if(!pq.empty())
            {
                total += pq.top();
                pq.pop();
            }
        }
        cout << total << endl;
    }
}
