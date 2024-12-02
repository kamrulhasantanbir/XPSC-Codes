#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, x = 0;
      cin >> n;
      vector<int> v(n);
      for (int i = 0; i < n; i++) {
         cin >> v[i];
         x ^= v[i];
      }

      int res = x;
      for (int i = 0; i < n; i++) {
         int cx = (x ^ v[i]);
         res = min(res, cx);
      }

      cout << res << '\n';
   }
   return 0;
}
