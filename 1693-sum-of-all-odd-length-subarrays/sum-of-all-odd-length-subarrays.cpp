class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr){
         int sum = 0;
        for(int i = 0; i < arr.size(); i++) { // for outer indexing or start
            for(int j = i; j < arr.size(); j++) { // end
                if((j - i + 1) % 2 != 0) { // to distinguish if the subarray length is odd
                    for(int k = i; k <= j; k++) { // to iterate subarrays
                        sum += arr[k];
                    }
                }
            }
        }
        return sum;
    }
    };
                              
       