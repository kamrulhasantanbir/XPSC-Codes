#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n;
      cin >> n;
      string s;
      cin >> s;
      int l , r = n - 1, ans = n;
      for (l = 0; l <= r; l++, r--) {
         if (s[l] == s[r]) {
            break;
         }
         ans -= 2;
      }
      cout << ans << '\n';
   }
   return 0;
}
