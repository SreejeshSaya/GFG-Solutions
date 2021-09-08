class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sum=(n*(n+1))/2;
        for(int x: array) sum -= x;
        return sum;
    }
};