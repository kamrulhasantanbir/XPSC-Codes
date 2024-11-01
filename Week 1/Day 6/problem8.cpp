
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, string> mp;
    int n, m;
    cin >> n >> m;

    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        mp[s2] = s1;
    }

    while (m--) {
        string s1, s2;
        cin >> s1 >> s2;
        s2.pop_back();
        cout << s1 << " " << s2 << "; #" << mp[s2] << '\n';
    }

    return 0;
}
