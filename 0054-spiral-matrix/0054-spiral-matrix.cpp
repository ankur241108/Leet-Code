class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>ans(m*n,0);

        int left=0,right=n-1;
        int top=0,bottom=m-1;
        int j=0;
    while(left<=right &&  top<=bottom){
        for(int i=left;i<=right;i++){
                ans[j]=matrix[top][i];
                j++;
               
        }
         top++;
        for(int i=top;i<=bottom;i++){
            ans[j]=matrix[i][right];
            j++;
        }
        right--;

        if(top<=bottom){
        for(int i=right;i>=left;i--){
            ans[j]=matrix[bottom][i];
            j++;
        }
        bottom--;
        }

        if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans[j]=matrix[i][left];
            j++;
        }
        left++;
        }
    }
    return ans;
    }
};