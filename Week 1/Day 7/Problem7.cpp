#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> cnt;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;

        if (cnt[name] == 0) {
            cout << "OK" << endl;
            cnt[name] = 1;
        } else {
            int count = cnt[name];
            string suffix = "";
            int temp = count;
            while (temp > 0) {
                suffix = char('0' + (temp % 10)) + suffix;
                temp /= 10;
            }

            string new_name = name + suffix;
            cout << new_name << endl;
            cnt[name]++;
        }
    }

    return 0;
}
