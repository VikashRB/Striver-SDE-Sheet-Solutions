class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // brute force
        /*int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; */

        // optimal approach
        unordered_map<int, int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int complement = target - nums[i];
            if (ans.find(complement) != ans.end()) {
                return {ans[complement], i};
            }
            ans[nums[i]] = i;
        }
        return {-1, -1};
    }
};
