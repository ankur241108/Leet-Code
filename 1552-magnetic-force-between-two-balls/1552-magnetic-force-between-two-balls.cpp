class Solution {
public:
    bool minforce(vector<int>&position,int mid,int m){

        int n=position.size();
        int count=1;
        int M1=position[0];

        for(int i=1;i<n;i++){
            if(position[i]-M1<mid){
                continue;
            }

            else{
                count++;
                M1=position[i];
            }
        }

        if(count>=m){
            return true;
        }

        else{
            return false;
        }
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1;
        int n=position.size();
        long long high=position[n-1]-position[0];
        int ans=high;

        while(low<=high){
            int mid=low+(high-low)/2;

            if(minforce(position,mid,m)){
                ans=mid;
                low=mid+1;

            }

            else{ 
                high=mid-1;
            }
        }

        return ans;

     }  
};