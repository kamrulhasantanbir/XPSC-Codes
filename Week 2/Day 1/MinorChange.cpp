#include<iostream>
using namespace std;
int main(){
string s,t;
cin>>s>>t;
int opCount=0;
for(int i=0;i<s.length();i++){
  if(s[i]!=t[i]){
    opCount++;
  }
}
cout<<opCount<<endl;


}
