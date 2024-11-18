
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
     long long int a,b,c;
     cin>>a>>b>>c;
        b=c+abs(c-b);

     if(a<b){
        cout<<"1"<<endl;
     }
     else if(a>b){
        cout<<"2"<<endl;
     }
     else{
        cout<<"3"<<endl;
     }
    }
}

