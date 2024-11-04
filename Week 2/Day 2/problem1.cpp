#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int d[n + 1] = {0};
    set<int> s;

    for (int i = n - 1; i >= 0; i--) {
        s.insert(a[i]);
        d[i + 1] = s.size();
    }

    while (m--) {
        int l;
        cin >> l;
        cout << d[l] << endl;
    }

    return 0;
}
