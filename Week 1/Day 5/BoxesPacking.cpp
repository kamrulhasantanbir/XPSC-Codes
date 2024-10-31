#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<long long, int> frequency;

    for (int i = 0; i < n; i++) {
        long long length;
        cin >> length;
        frequency[length]++;
    }

    int maxFrequency = 0;
    for (auto [l, freq] : frequency) {
        if (freq > maxFrequency) {
            maxFrequency = freq;
        }
    }

    cout << maxFrequency << endl;

    return 0;
}
