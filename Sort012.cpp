class Solution {
    public:
    void sort012(int a[], int n) {
        int p0, p1, p2;
        p0 = p1 = 0;
        p2 = n-1;
        while(p1<=p2) {
            if(a[p1] == 0) swap(a[p0++], a[p1++]);
            else if(a[p1] == 1) ++p1;
            else swap(a[p1], a[p2--]);
        }
    }
    
};