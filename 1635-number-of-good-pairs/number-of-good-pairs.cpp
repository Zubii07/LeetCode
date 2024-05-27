class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int answer=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(nums[i]==nums[j]&&i<j){
                    answer++;
                }
            }
        }
        return answer;
    }
};