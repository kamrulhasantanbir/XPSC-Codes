#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
map<string,int>M;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    M[s]++;
    if(M[s]==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
}
