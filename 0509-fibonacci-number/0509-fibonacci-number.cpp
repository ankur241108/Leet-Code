class Solution {
public:

    int fibonacci(int n){
          if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        int ans=fib(n-1)+fib(n-2);

        return ans;
    }



    int fib(int n) {
      int ans=fibonacci(n);
        return ans;
    }

};