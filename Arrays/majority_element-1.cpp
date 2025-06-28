class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*unordered_map<int,int>count;
        int n=nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(auto i=count.begin();i!=count.end();i++){
            if(i->second>n/2){
                return i->first;
            }
        }
    return 0;*/

        // optimal solution : Moore's voting algorithm
        int ele = 0, cnt = 0;

        for(int num : nums) {
            if(cnt == 0) ele = num;
            if(num == ele) cnt++;
            else cnt--;
        }

        return ele;
    }
};