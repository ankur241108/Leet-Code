class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
       
       
        
       int high = *max_element(piles.begin(), piles.end());
         int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long count=0;

            for(int i=0;i<n;i++){
                count=count+(piles[i]+mid-1)/mid;
            }
           
            if(count<=h){
                high=mid-1;
                ans=mid;
            }

            else{
                low=mid+1;
            }
        }
        return ans;
    }
};