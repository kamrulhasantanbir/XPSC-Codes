#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> freq;
    int l = 0;
    long long count = 0;

    for (int r = 0; r < n; r++)
    {
        int x = arr[r];
        freq[x]++;
        while (freq.size() > k)
        {
            int y = arr[l];
            freq[y]--;
            l++;
            if (freq[y] == 0)
            {
                freq.erase(y);
            }
        }
        count += r - l + 1 ;
    }
    cout << count << endl;
    return 0;
}
