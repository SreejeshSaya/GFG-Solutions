class Solution{   
public:
    int shortestPath(int x, int y){ 
        int c=0;
        while(x!=y) {
            if(x>y) {
                ++c;
                x>>=1;
            }
            if(y>x) {
                ++c;
                y>>=1;
            }
        }
        return c;
    }
};
