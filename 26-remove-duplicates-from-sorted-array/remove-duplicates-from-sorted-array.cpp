class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.empty()) return 0;
    
    int j = 0; // Initialize the second pointer
    
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[j]) { // If a new unique element is found
            ++j; // Increment j
            nums[j] = nums[i]; // Place the unique element at the correct position
        }
    }
    
    return j + 1; // The number of unique elements
    }
};