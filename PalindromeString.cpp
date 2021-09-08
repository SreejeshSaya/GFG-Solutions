class Solution{
public:
	int isPlaindrome(string S) {
	    string r=S;
	    reverse(r.begin(), r.end());
	    return r==S;
	}
};
