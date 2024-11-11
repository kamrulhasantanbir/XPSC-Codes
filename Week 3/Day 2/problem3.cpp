#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   vector<int> a(n), b(m);
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }
   for (int j = 0; j < m; j++) {
      cin >> b[j];
   }

   int x = 0, y = 0;
   long long res = 0;
   while (x < n && y < m) {
      int val = a[x], cntA = 0, cntB = 0;
      while (x < n && a[x] == val) {
         cntA++;
         x++;
      }
      while (y < m && val > b[y]) {
         y++;
      }
      while (y < m && b[y] == val) {
         cntB++;
         y++;
      }
      res += (1LL * cntA * cntB);
   }

   cout << res << '\n';
   return 0;
}
