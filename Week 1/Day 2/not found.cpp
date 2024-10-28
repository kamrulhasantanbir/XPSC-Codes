#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    char finder = 'a';
    for (int i = 0; i < 26; i++) {
        bool present = false;
        for (int j = 0; j < S.size(); j++) {
            if (finder == S[j]) {
                present = true;
                break;
            }
        }
        if (!present) {
            cout << finder;
            return 0;
        }
        finder++;
    }
    cout << "None";
    return 0;
}
