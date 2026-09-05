class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=nums1.size();
        int k=0;
        for(int i=m;i<j;i++){
            nums1[i]=nums2[k];
            k++;
        }

        sort(nums1.begin(),nums1.end());
    }
};