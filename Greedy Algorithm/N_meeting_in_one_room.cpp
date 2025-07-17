class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        vector<pair<int, int>> meetings;
        
        for(int i = 0; i < start.size(); i++) {
            meetings.push_back({end[i], start[i]});
        }
        
        sort(meetings.begin(), meetings.end());
        
        int last_end = -1;
        int cnt = 0;
        
        for(auto a : meetings) {
            int curr_start = a.second;
            int curr_end = a.first;
            
            if(curr_start > last_end) {
                cnt++;
                last_end = curr_end;
            }
        }
        
        return cnt;
    }
};