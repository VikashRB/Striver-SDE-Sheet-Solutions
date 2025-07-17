class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        vector<pair<int, int>> jobs;
        int n = deadline.size();
        int maxDeadline = 0;
        int maxJobs = 0, maxProfit = 0;
        
        for(int i = 0; i < n; i++) {
            jobs.push_back({profit[i], deadline[i]});
        }
        
        for(int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, deadline[i]);
        }
        
        sort(jobs.begin(), jobs.end(), greater<pair<int, int>>());
        
        vector<bool> slots(maxDeadline + 1, false);
        
        for(auto job : jobs) {
            int profit = job.first;
            int dline = job.second;
            
            for(int t = dline; t > 0; t--) {
                if(!slots[t]) {
                    slots[t] = true;
                    maxJobs++;
                    maxProfit += profit;
                    break;
                }
            }
        }
        
        return {maxJobs, maxProfit};
    }
};