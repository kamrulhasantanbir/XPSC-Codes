#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n][n-1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                cin>>arr[i][j];
            }
        }

        int result[n];
        for(int i=0; i<n; i++)
        {
            if(arr[i][0]==arr[i+1][0] || arr[i][0]==arr[i+2][0])
            {
                result[0]=arr[i][0];
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i][0]!=result[0])
            {
                for(int j=0; j<n-1; j++)
                {
                    result[j+1]=arr[i][j];
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
}
