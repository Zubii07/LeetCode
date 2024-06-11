class Solution {
public:
    int singleNumber(vector<int>& nums) {
       /*solve by using XOR operator 
          A^0=A , A^A=0 */
        int n=nums.size();
        int a=0;
        for(int i=0; i<n; i++){
            a=a^nums[i];
        }
        return a;
        
    }
};