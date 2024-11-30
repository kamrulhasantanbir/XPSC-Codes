#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        string x = "";
        for (int i = 0; i < s.size(); i++) {
            x += "(";
        }
        for (int i = 0; i < s.size(); i++) {
            x += ")";
        }

        string y = "";
        for (int p = 0; p < s.size(); p++) {
            y += "()";
        }

        bool foundX = false;
        for (int i = 0; i <= x.size() - s.size(); i++) {
            if (x.substr(i, s.size()) == s) {
                foundX = true;
                break;
            }
        }

        bool foundY = false;
        for (int i = 0; i <= y.size() - s.size(); i++) {
            if (y.substr(i, s.size()) == s) {
                foundY = true;
                break;
            }
        }

        if (!foundX) {
            cout << "YES\n" << x << endl;
        } else if (!foundY) {
            cout << "YES\n" << y << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
