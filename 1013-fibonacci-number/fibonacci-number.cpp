class Solution {
public:
    int fib(int n) {
        if(n<=1) // lowest possible valid value of program
            return n;
        
        return fib(n-1) + fib(n-2);
        
    }
};