
#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int days = 0, problems = 1;
    while (!s.empty()) {
        auto it = s.lower_bound(problems);
        if (it != s.end()) {
            days++;
            s.erase(it);
        } else {
            break;
        }
        problems++;
    }

    cout << days << endl;
    return 0;
}
