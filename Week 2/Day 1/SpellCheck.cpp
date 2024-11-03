
#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {

        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n!=5)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int arr[5]={0};
            for(int i=0; i<5; i++)
            {
                if(s[i]=='T')
                {
                    arr[0]=1;
                }
                else if(s[i]=='i')
                {
                    arr[1]=1;
                }
                else if(s[i]=='m')
                {
                    arr[2]=1;
                }
                else if(s[i]=='u')
                {
                    arr[3]=1;
                }
                else if(s[i]=='r')
                {
                    arr[4]=1;
                }
            }
            bool flag=true;
            for(int i=0; i<5; i++)
            {
                if(arr[i]!=1)
                {
                    flag=false;
                }
            }
            if(flag)
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
