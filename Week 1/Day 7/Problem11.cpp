#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool inserted = false;
        int len = s.size();

        for (int i = 0; i < len - 1; i++) {
            if (s[i] == s[i + 1]) {
                char ch;
                if (s[i] == 'z') {
                    ch = 'a';
                } else {
                    ch = s[i] + 1;
                }
                s.insert(s.begin() + i + 1, ch);
                inserted = true;
                break;
            }
        }

        if (!inserted) {
            char c;
            if (s[0] == 'z') {
                c = 'a';
            } else {
                c = s[0] + 1;
            }
            s = c + s;
        }

        cout << s << "\n";
    }

    return 0;
}
