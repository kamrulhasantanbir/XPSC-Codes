#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int serejaScore = 0, dimaScore = 0;

    for (int i = 0; i < n; i++) {
        if (cards.front() > cards.back()) {
            if (i % 2 == 0) {
                serejaScore += cards.front();
            } else {
                dimaScore += cards.front();
            }
            cards.pop_front();
        } else {
            if (i % 2 == 0) {
                serejaScore += cards.back();
            } else {
                dimaScore += cards.back();
            }
            cards.pop_back();
        }
    }

    cout << serejaScore << " " << dimaScore << endl;

    return 0;
}
