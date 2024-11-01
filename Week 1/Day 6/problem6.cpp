#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        string str;
        cin >> str;
        int lCount = 0, uCount = 0;
        deque<char> Deq;

        for (int i = str.size() - 1; i >= 0; --i) {
            if (str[i] == 'B') {
                uCount++;
                continue;
            }
            if (str[i] == 'b') {
                lCount++;
                continue;
            }
            if (lCount && str[i] >= 'a' && str[i] <= 'z') {
                lCount--;
                continue;
            }
            if (uCount && str[i] >= 'A' && str[i] <= 'Z') {
                uCount--;
                continue;
            }
            Deq.push_front(str[i]);
        }

        for (char ch : Deq) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
