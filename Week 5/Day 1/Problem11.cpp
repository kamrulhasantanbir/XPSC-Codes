class Solution
{
public:
    int lenOfLongestSubarr(vector<int>& arr, int k)
    {
        int n = arr.size(), ans = 0;
        long long int sum = 0;
        map<long long int, int> M;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum == k)
                ans = max(ans, i + 1);

            if (M.count(sum - k))
            {
                int temp = i - M[sum - k];
                ans = max(ans, temp);
            }

            if (!M.count(sum))
                M[sum] = i;
        }
        return ans;
    }
};
