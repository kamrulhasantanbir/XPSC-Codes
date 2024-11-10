#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    vector<int>V(n);
	    for(int i=0;i<n;i++){
	        cin>>V[i];
	    }
	    sort(V.begin(),V.end());
	    int case1,case2,case3;
	    case1=V[n-3]-V[0];
	    case2=V[n-2]-V[1];
	    case3=V[n-1]-V[2];

	    int result=min({case1,case2,case3});
	    cout<<result<<endl;
	}

}
