class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int s[], int e[], int n)
    {
        // Your code here
        vector<pair<int, int>> acts;
        for(int i=0; i<n; ++i) {
            acts.push_back({s[i], e[i]});
        }
        
        auto cmp = [](pair<int, int> a, pair<int, int> b) {
            return (a.second == b.second) ? (a.first < b.first) : a.second < b.second; 
        };
        
        sort(acts.begin(), acts.end(), cmp);
        int j;
        int cnt(1);
        int endTime=acts[0].second;
        for(j=1; j<n; ++j) {
            if(acts[j].first > endTime) {
                endTime = acts[j].second;
                cnt++;
            }
        }
        return cnt;
    }
};
