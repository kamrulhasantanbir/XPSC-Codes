#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        long long int checker = -1;
        bool pos = true;
        for (int i = 0; i < n; i++)
        {
            if(pos)
            {
                cin >> arr[i];
                if (arr[i] != 0)
                {
                    if (checker == -1)
                    {
                        checker = arr[i];
                    }
                    else if (checker != arr[i])
                    {
                        pos = false;
                    }
                }
            }
            else
            {
                cin>>arr[i];
            }
        }
        if (pos)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
