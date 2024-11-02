#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0; t<T; t++)
    {
        int n;
        cin>>n;
        set<char> uniqueChars;
        char arr[n];

        for (int i=0; i<n; i++)
        {
            char ch;
            cin>>ch;
            arr[i]=ch;
            uniqueChars.insert(ch);
        }


        vector<char>V;
        for(char ch : uniqueChars)
        {
            V.push_back(ch);
        }

        map<char,char>M;
        for(int i=0; i<V.size(); i++)
        {
            M[V[i]]=V[V.size()-i-1];
        }

        for(int i=0; i<n; i++)
        {
            arr[i]=M[arr[i]];
            cout<<arr[i];
        }
        cout<<'\n';

    }
    return 0;
}
