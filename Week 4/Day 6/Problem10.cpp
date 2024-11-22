class Solution {
public:
   int longestKSubstr(string str, int k) {
      int n = str.size(), left = 0, right = 0, result = -1;
      map<char, int> count;

      while (right < n) {
         count[str[right]]++;
         if (count.size() == k) {
            result = max(result, right - left + 1);
         }
         else {
            while (count.size() > k && left <= right) {
               count[str[left]]--;
               if (count[str[left]] == 0) {
                  count.erase(str[left]);
               }
               left++;
            }
         }
         right++;
      }

      return result;
   }
};
