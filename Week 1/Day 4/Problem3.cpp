#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set<string> uni;
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        uni.insert(s);
    }

    cout << uni.size() << endl;

    return 0;
}
