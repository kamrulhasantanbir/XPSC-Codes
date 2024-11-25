
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        for(int i = 1; i <= k; i++) {
            cout << i << " ";
        }
        for(int j = n; j > k; j--) {
            cout << j << " ";
        }
        cout <<endl;
    }
}
