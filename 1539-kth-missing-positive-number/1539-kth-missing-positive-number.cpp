class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0;
        int high=arr.size()-1;
        if((arr[high]-high-1)==0){
            return (arr[high]+k);
        }

        while(low<=high){
            int mid=low+(high-low)/2;

            if((arr[mid]-mid)<=k){
                low=mid+1;
            }

            else{
                high=mid-1; 
            }


        }
                    int ans=high+1+k;
                    return ans;

    }
};