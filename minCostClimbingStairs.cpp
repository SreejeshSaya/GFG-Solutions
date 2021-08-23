class Solution {
  public:
    int minCostClimbingStairs(vector<int>&cost ,int n) {
        //Write your code here
        if(n==1) return 1;
        vector<int> steps(n, 0);
        steps[0] = cost[0];
        steps[1] = cost[1];
        int step;
        for(step=2; step<n; ++step) {
            steps[step] = min(steps[step-1], steps[step-2]) + cost[step];
        }
        return min(steps[step-1], steps[step-2]);
    }
};