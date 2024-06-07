class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; // return x if x is less than 2

    int left = 2, right = x / 2; // initialize the left and right pointers, which are used to determine the range of possible square roots.
    int mid;
    long num; // use long to store result of mid * mid to prevent overflow.
    while (left <= right) { 
      mid = left + (right - left) / 2; // find the middle element of the current range.
      num = (long) mid * mid;
      if (num > x)
        right = mid - 1; // if mid * mid is greater than x, set right to mid - 1.
      else if (num < x)
        left = mid + 1; // if mid * mid is less than x, set left to mid + 1.
      else
        return mid; // if mid * mid is equal to x, return mid.
    }

    return right; // return right after the loop.
  }
        
    
};