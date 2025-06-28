class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int ans1 = -1, ans2 = -1;
        vector<int> hash(n + 1, 0);

        for(auto num : nums) {
            hash[num]++;
        }

        for(int i = 1; i < hash.size(); i++) {
            if(hash[i] == 2) ans1 = i;
            else if(hash[i] == 0) ans2 = i;
        }

        return {ans1, ans2};
    }
};