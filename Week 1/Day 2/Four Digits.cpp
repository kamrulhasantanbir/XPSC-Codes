#include<bits/stdc++.h>
using namespace std;
int main(){
  int A;
  vector<int>store;
  cin>>A;
  for(int i=0;i<4;i++){
    if(A!=0){
    int b=A%10;
    store.push_back(b);
    A=A/10;}
    else{
      store.push_back(0);
    }
  }
  reverse(store.begin(),store.end());
  for(int i:store){
    cout<<i;
  }
}
