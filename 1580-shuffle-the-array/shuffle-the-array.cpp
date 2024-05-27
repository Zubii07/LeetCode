class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result1;
       vector<int> result2;
       vector<int> result;
       for(int i=0;i<n;i++){
        result1.push_back(nums.at(i));
        result2.push_back(nums.at(n+i));
       }
   for(int i=0;i<n;i++){
    result.push_back(result1.at(i));
    result.push_back(result2.at(i));
   }
  
   return result; 
        
    }
};