class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& r, vector<int>& c) {
        int n=r.size(),m=c.size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i]==0)break;
                else{
                    int mi=min(r[i],c[j]);
                    r[i]-=mi;
                    c[j]-=mi;
                    ans[i][j]+=mi;
                }
            }
        }return ans;
    }
};