


#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, n;
    cin >> t;

    for (int i = 0; i < t; i++) {
        priority_queue<long long> pq;
        cin >> n;

        for (long long i = n; i >= 1; i--) {
            pq.push(i);
        }

        long long a, b, c;
        cout << 2 << endl;

        for (; pq.size() > 1;) {
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            cout << a << " " << b << endl;
            c = a + b;
            if (c & 1) c++;
            c /= 2;
            pq.push(c);
        }
    }

    return 0;
}
