#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int opt1,opt2;
if(a<b){
opt1=2*b-1;
}
else{
opt1=2*a-1;
}
opt2=a+b;
if(opt1<opt2){cout<<opt2;}
else{cout<<opt1;}
}