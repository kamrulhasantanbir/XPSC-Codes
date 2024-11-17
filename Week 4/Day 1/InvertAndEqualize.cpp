
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }

        int zero = 0, one = 0;
        char current = s[0];

        for (int i = 1; i < n; i++) {
            if (s[i] != current) {
                if (s[i] == '0') {
                    one++;
                } else {
                    zero++;
                }
                current = s[i];
            }
        }
        if(zero!=0 || one!=0 ){
            if(s[n-1]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }

        cout << min(one, zero) << endl;
    }
}
