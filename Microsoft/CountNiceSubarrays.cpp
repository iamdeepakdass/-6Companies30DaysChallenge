class Solution
{
public:
    int numberOfSubarrays(vector<int> &nums, int k)
    {

        int n = nums.size();
        int oddCount = 0;
        int res = 0;

        unordered_map<int, int> mp;
        mp[0] = 1;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] & 1)
            {
                oddCount++;
            }
            mp[oddCount]++;
            if (mp.find(oddCount - k) != mp.end())
            {
                res += mp[oddCount - k];
            }
        }

        return res;
    }
};