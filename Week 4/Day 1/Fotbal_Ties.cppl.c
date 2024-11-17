
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	 cin>>T;
	 while(T--){
	     int x,y;
	     cin>>x>>y;
	     int r1=x%3;
	     int r2=y%3;
	     r1<r2?cout<<r2<<endl:cout<<r1<<endl;
	 }

}
