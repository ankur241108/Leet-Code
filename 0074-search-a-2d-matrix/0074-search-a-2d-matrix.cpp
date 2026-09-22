class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int j=0;
        int cols=matrix[0].size()-1;
        int rows=matrix.size()-1;
        int targetrow=0;

        
        while(i<=rows){
            int mid=i+(rows-i)/2;
            
            if(matrix[mid][0]<=target){
                targetrow=mid;
                 i=mid+1;
            }
            else{
               rows=mid-1;
            }
        }


        while(j<=cols){
            int mid=j+(cols-j)/2;

            if(matrix[targetrow][mid]==target){
                return true;
            }

            else if(matrix[targetrow][mid]<target){
                j=mid+1;
            }

            else{
                cols=mid-1;
            }


        }

        return false;

    }
};