class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>temp;

        int n=numRows;

        for(int i=0;i<n;i++){
            vector<int>rows(i+1,1);
            {
                 int ans=1;
                for(int j=1;j<i;j++){
                   
                    ans=ans*(i+1-j);
                    ans=ans/j;
                    rows[j]=ans;
                }
                temp.push_back(rows);
            }
        }
        return temp;
    }
};