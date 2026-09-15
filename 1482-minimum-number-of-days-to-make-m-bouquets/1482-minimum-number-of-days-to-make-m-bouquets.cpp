class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if(n/k<m){
            return -1;
        }

        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans =high;
        while(low<=high){

            int mid=low+(high-low)/2;
            int count=0;
            int bouquet=0;
            
            for(int i=0;i<n;i++){
                    if(bloomDay[i]<=mid){
                        count++;{
                            if(count==k){
                                bouquet++;
                                count=0;
                            }
                        }
                       
                    }
                    else{      
                        count=0;
                    }
            }

            if(bouquet>=m){
                ans=mid;
                high=mid-1;
            }


            else{
                low=mid+1;
            }

          
        }
        return ans;
    }
};