class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int temp=n;
        int product=1;
        int rem=0;

        while(n!=0){
            rem=n%10;
            n=n/10;
            sum=sum+rem;
            product=product*rem;
        }

        if(temp%(sum+product)==0){
            return true;
        }

        else {
            return false;
        }
    }
};