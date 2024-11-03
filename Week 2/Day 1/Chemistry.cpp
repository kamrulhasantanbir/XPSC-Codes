
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        long len, del;
        cin >> len >> del;
        string str;
        cin >> str;

        int fre[26] = {0};
        for (long i = 0; i < str.size(); i++) {
            ++fre[str[i] - 'a'];
        }

        long oddCount = 0;
        for (int i = 0; i < 26; i++) {
            if (fre[i] % 2 != 0) {
                oddCount++;
            }
        }

        if (oddCount <= del + 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
