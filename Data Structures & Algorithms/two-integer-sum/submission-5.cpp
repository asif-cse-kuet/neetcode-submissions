class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> f;
        for (int i = 0; i < nums.size(); i++)
        {
            int d = target - nums[i];
            if (f.contains(d)) return {f[d], i};
            else f[nums[i]]= i;
        }
    }
};
