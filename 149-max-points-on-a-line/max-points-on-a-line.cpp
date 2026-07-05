class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int cnt=1;
        int n=points.size();

        for(int i=0;i<n;i++){
            unordered_map<double,int> mp;
            for(int j=i+1;j<n;j++){
                int ydiff=points[j][1]-points[i][1];
                int xdiff=points[j][0]-points[i][0];

                double slope=INT_MAX;
                if(xdiff!=0) slope=double(ydiff)/xdiff;

                mp[slope]++;

                cnt=max(cnt,mp[slope]+1);
            }
        }

        return cnt;
    }
};