class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int lastNonZeroFoundAt = 0; // Position to place the next non-zero element

    // First pass: Move all non-zero elements to the beginning of the vector
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }

    // Second pass: Fill the remaining positions with zeroes
    for (int i = lastNonZeroFoundAt; i < n; i++) {
        nums[i] = 0;
    }
}
};