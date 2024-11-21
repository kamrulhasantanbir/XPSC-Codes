
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int x;
   long long y;
   cin >> x >> y;
   vector<int> z(x);
   for (int i = 0; i < x; i++) {
      cin >> z[i];
   }

   int l = 0, r = 0;
   long long s = 0, t = 0;
   while (r < x) {
      s += z[r];
      if (s <= y) {
         t += (r - l + 1);
      }
      else {
         while (s > y && l <= r) {
            s -= z[l];
            l++;
         }
         if (s <= y) {
            t += (r - l + 1);
         }
      }
      r++;
   }

   cout << t << '\n';

   return 0;
}
