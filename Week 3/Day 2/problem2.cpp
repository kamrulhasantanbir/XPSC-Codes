#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   vector<int> a(n), b(m);
   for (int i = 0; i < n; i++) cin >> a[i];
   for (int i = 0; i < m; i++) cin >> b[i];

   int x = 0, y = 0, c = 0;
   while ( y < m ) {
      if (x < n && a[x] < b[y]) {
         c++, x++;
      } else {
         cout << c << " ";
         y++;
      }
   }
   return 0;
}
