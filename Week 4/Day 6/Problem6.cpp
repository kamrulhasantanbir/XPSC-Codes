#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   long long k;
   cin >> n >> k;
   long long arr[n];
   for (int i = 0; i < n; i++) {
      cin >> arr[i];
   }

   int left = 0, right = 0;
   long long result = 0;
   multiset<long long> ms;
   while (right < n) {
      ms.insert(arr[right]);
      long long min_val = *ms.begin(), max_val = *ms.rbegin();
      if (max_val - min_val <= k) {
         result += (right - left + 1);
      } else {
         while (left <= right) {
            min_val = *ms.begin(), max_val = *ms.rbegin();
            if (max_val - min_val <= k) {
               break;
            }
            ms.erase(ms.find(arr[left]));
            left++;
         }
         min_val = *ms.begin(), max_val = *ms.rbegin();
         if (max_val - min_val <= k) {
            result += (right - left + 1);
         }
      }
      right++;
   }

   cout << result << '\n';

   return 0;
}
