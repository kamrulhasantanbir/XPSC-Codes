#include<iostream>
using namespace std;
int main(){
int A,B,C;
cin>>A>>B>>C;
bool flag=false;
for(int i=A;i<=B;i++){
if(i%C==0){
cout<<i;
flag=true;
break;
}
}
if(!flag){
cout<<"-1";
}
}