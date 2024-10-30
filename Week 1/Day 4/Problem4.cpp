#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<pair<string, string>> V;

    for (int i = 0; i < q; ++i) {
        string s, t;
        cin >> s >> t;

        bool found = false;
        for (int j = 0; j < V.size(); ++j) {
            if (V[j].first == s) {
                V[j].second = t;
                found = true;
                break;
            } else if (V[j].second == s) {
                V[j].second = t;
                found = true;
                break;
            }
        }

        if (!found) {
            V.push_back({s, t});
        }
    }

    cout << V.size() << endl;
    for (int i = 0; i < V.size(); ++i) {
        cout << V[i].first << " " << V[i].second << endl;
    }

    return 0;
}
