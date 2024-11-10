
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    double myPoints = x + y * 0.5;
    double opponentPoints = y * 0.5 + z * 1;
    int remainingGames = 4 - (x + y + z);
    double maxPoints = myPoints + remainingGames;

    if (maxPoints > opponentPoints) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
