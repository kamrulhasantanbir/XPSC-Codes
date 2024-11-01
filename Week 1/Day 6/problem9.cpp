
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> messages(n);

    for (int i = 0; i < n; ++i) {
        cin >> messages[i];
    }

    map<string, bool> chatMap;
    vector<string> chatList;

    for (int i = n - 1; i >= 0; --i) {
        string friendName = messages[i];

        if (chatMap.find(friendName) == chatMap.end()) {
            chatMap[friendName] = true;
            chatList.push_back(friendName);
        }
    }

    for (int i = 0; i <chatList.size(); i++) {
        cout << chatList[i] << endl;
    }

    return 0;
}
