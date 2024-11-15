
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        string s,t;
        cin>>s>>t;
        if(s[s.size()-1]==t[t.size()-1])
        {
            if(s.size()==t.size())
            {
                cout<<"="<<endl;
            }
            else if(s[s.size()-1]=='S')
            {
                if(s.size()<t.size())
                {
                    cout<<">"<<endl;
                }
                else
                {
                    cout<<"<"<<endl;
                }
            }
            else
            {
                if(s.size()<t.size())
                {
                    cout<<"<"<<endl;
                }
                else
                {
                    cout<<">"<<endl;
                }
            }

        }
        else
        {
            if(s[s.size()-1]== 'M' && t[t.size()-1] =='S')
            {
                cout<<">"<<endl;
            }
            else if(s[s.size()-1]== 'M' && t[t.size()-1] =='L')
            {
                cout<<"<"<<endl;
            }
            else if(s[s.size()-1]== 'S' && t[t.size()-1] =='L')
            {
                cout<<"<"<<endl;
            }
            if(s[s.size()-1]== 'S' && t[t.size()-1] =='M')
            {
                cout<<"<"<<endl;
            }
            else if(s[s.size()-1]== 'L' && t[t.size()-1] =='M')
            {
                cout<<">"<<endl;
            }
            else if(s[s.size()-1]== 'L' && t[t.size()-1] =='S')
            {
                cout<<">"<<endl;
            }
        }


    }
}
