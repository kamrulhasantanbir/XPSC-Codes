
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long totalSum = 0;
    long long smallestOdd = -1;

    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        totalSum += num;

        if (num % 2 != 0) {
            if (smallestOdd == -1 || num < smallestOdd) {
                smallestOdd = num;
            }
        }
    }

    if (totalSum % 2 == 0) {
        cout << totalSum << endl;
    } else {
            cout << totalSum - smallestOdd << endl;
    }

    return 0;
}
