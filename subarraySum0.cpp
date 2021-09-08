int maxLen(int arr[], int n)
{
    int s=0;
    map<int, int> m;
    m[0] = -1;
    int maxLen=0;
    for(int i=0; i<n; ++i) {
        s+=arr[i];
        if(m.find(s) == m.end()) m[s] = i;
        else { maxLen = max(maxLen, (i - m[s])); }
    }
    return maxLen;
}
