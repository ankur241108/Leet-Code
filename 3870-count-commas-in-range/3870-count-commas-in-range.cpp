class Solution {
public:
    int countCommas(int n) {
        int comma =0;
        int reference=1000;

        comma=n-1000+1;

        if(comma<1){
            return 0;
        }

        else{
            return comma;
        }
    }
};