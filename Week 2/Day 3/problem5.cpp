#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<pair<int,long long int>>M;
    set<pair<long long int,int>>P;
    long long int maxx=pow(10,9);
    int customer=1;
    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        int q;
        cin>>q;
        if(q==1){
            long long int m;
            cin>>m;
            m=maxx-m;
            M.insert({customer,m});
            P.insert({m,customer});
            customer++;

        }
        else if(q==2){
            pair<int ,int > p1=*M.begin();
            cout<<p1.first<<" ";
            M.erase(M.begin());
            P.erase({p1.second,p1.first});
        }
        else {
            pair<int ,int > p1=*P.begin();
            cout<<p1.second<<" ";
            P.erase(P.begin());
            M.erase({p1.second,p1.first});
        }

    }
}
