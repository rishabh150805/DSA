class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        if(x==1)return 1;
        for(long i=0 ; i<x; i++){
            if(i*i <= x){
                ans=i;

            }else{
                return ans;
            }
        }
        return ans;
    }
};