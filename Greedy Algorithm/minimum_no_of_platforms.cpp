class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int n = arr.size();
        int cnt = 0, max_cnt = 0;
        int i = 0, j = 0;
        
        while(i < n) {
            if(arr[i] <= dep[j]) {
                cnt++;
                i++;
            } else {
                cnt--;
                j++;
            }
            max_cnt = max(cnt, max_cnt);
        }
        
        return max_cnt;
    }
};
