class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int p=log10(LLONG_MAX)+1;
        // cout<<p<<" ";
        long long val=0;
        for(int i=0;i<k;i++){
            val*=10;
            val+=1;
            val%=k;
            if(val==0) return i+1;
        }
        return -1;
    }
};