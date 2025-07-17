// User function Template for C++

class Solution {
  public:
    vector<int> minPartition(int N) {
        // code here
        int i = 0, remaining = 0;
        vector<int> ans;
        vector<int> dem = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        
        int n = dem.size();
        
        while(i < n && N != 0) {
            if(N >= dem[i]) {
                N = N - dem[i];
                ans.push_back(dem[i]);
            } else {
                i++;
            }
        }
        
        return ans;
    }
};