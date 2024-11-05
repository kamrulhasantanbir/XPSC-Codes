
#include <bits/stdc++.h>
using namespace std;


class cmp {
public:
    bool operator()(int a, int b) {
        return a < b;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        priority_queue<int, vector<int>, cmp> bonuses;
        int army = 0;
        int q;
        cin >> q;

        for (int i = 0; i < q; i++) {
            int y;
            cin >> y;
            if (y != 0) {
                bonuses.push(y);
            } else {
                if (!bonuses.empty()) {
                    army += bonuses.top();
                    bonuses.pop();
                }
            }
        }

        cout << army << endl;
    }

    return 0;
}
