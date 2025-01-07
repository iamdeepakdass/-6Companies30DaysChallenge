// LC 462. Minimum Moves to Equal Array Elements II

class Solution {
public:
    int minMoves2(vector<int>& nums) {

        int n = nums.size();

        sort(begin(nums), end(nums));
        int res = 0;

        if(n&1) {
            int mid = n/2;
            for(int i:nums) res += abs(i - nums[mid]);
        }
        else {
            int mid = n/2;
            int val = (nums[mid-1] + nums[mid])/2;
            for(int i:nums) res += abs(i - val);
        }
        return res;
    }
};