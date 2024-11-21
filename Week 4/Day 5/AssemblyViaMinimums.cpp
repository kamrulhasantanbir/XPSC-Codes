#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int x = (n * (n - 1)) / 2;
        long long arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + x);
        int idx = 0;
        for (int i = n - 1; i > 0; i--)
        {
            cout << arr[idx] << " ";
            idx += i;
        }
        cout << "1000000000"<<endl;
    }
}
