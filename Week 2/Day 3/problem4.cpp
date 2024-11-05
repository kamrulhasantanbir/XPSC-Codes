#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        int n,k;
        cin>>n>>k;
        map<int,int>M;
        map<int, int>N;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            if(M[a]==0)
            {
                M[a]=i+1;
            }
            else
            {
                N[a]=i+1;
            }

        }
        for(int i=0; i<k; i++)
        {
            int a,b;
            cin>>a>>b;
            if(M[a]==0 ||M[b]==0)
            {
                cout<<"NO"<<endl;
            }
            else if(M[a]<M[b] || M[a]<N[b])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
    }
}
