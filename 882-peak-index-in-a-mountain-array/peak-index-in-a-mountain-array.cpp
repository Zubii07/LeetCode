class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        // Solve by Linear Search
        int i = 0;
        while(arr[i] < arr[i+1]){
            i++;
        }
        return i;
        
    }
};