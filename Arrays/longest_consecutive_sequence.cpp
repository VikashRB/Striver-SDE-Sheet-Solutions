class Solution {
public:
    // brute force
    /*bool ls(vector<int>& nums, int num){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num){
                return true;
            }
        }
    return false;
    }*/

    int longestConsecutive(vector<int>& nums) {
        /*int longest=1,x,count=0;
        for(int i=0;i<nums.size();i++){
            x=nums[i];
            count=1;
            while(ls(nums,x+1)==true){
                x+=1;
                count++;
            }
        longest = max(count,longest);
        }
    return longest;*/

        // better approach
        /*sort(nums.begin(),nums.end());
        int lastSmaller=INT_MIN,count=0,longest=1;
        for(int i=0;i<nums.size();i++){
            if((nums[i]-1)==lastSmaller){
                count++;
                lastSmaller=nums[i];
            }
            else if(nums[i]!=lastSmaller){
                count=1;
                lastSmaller=nums[i];
            }
        longest=max(longest,count);
            }
        return longest;*/
        int ans = 0;
        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        for(auto it : st) {
            if(st.find(it - 1) == st.end()) {
                int x = it;
                int cnt = 1;
                while(st.find(x + 1) != st.end()) {
                    x++;
                    cnt++;
                }
                ans = max(ans, cnt);
            }
        }

        return ans;
    }
};