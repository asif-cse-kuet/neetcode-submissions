class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<long int> feq;
        for (int i = 0; i < nums.size(); i++)
        {
            if(feq.contains(nums[i])) return true;
            else feq.insert(nums[i]);
        }
        return false;
    }
};