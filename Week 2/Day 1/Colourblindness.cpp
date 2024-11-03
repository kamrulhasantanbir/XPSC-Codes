
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {

   int n;
   string a,b;
   cin>>n>>a>>b;
   bool flag=true;
   for(int j=0;j<n;j++)
   if(a[j]==b[j] || (a[j]=='B' && b[j]=='G') || (a[j]=='G' && b[j]=='B')){

   }
   else{
    flag=false;
   }

   if(flag){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

    }
}
