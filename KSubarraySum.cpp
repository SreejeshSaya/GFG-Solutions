#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, n, k, m;
    cin >> t;
    vector<int> arr;
    vector<int> s;
    while(t--) {
        cin >> n >> k >> m;
        arr.clear();
        arr.resize(n);
        for(int i=0; i<n; ++i) cin >> arr[i];
        
        s.clear();
        s.resize(n-k+1);
        int sum=0;
        for(int i=0; i<k; ++i) sum += arr[i];
        s[0] = sum;
        for(int i=k; i<n; ++i) {
            sum = sum - arr[i-k] + arr[i];
            s[i-k+1] = sum; 
        }
        sort(s.begin(), s.end(), greater<int>());
        for(int i=0; i<m; ++i) cout << s[i] << " ";
        cout << endl;
    }
	return 0;
}