class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // brute/better solution
        /*int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                maxi=max(sum,maxi);
            }
        }
    return maxi;*/

        // kadane's algorithm
        int sum = 0, maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if(sum > maxi) maxi = sum;
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
};