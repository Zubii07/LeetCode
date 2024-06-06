class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         int n=nums1.size();
                int m=nums2.size();
                vector<int> result;

         int j,k;
        for(int i=0;i<n;i++){
            bool flag;
            for(  j=0;j<m;j++){
                if(nums1[i]==nums2[j] ){
                    flag=0;
                   
                    for( k=j+1;k<m;k++){
                        if(nums2[j]<nums2[k]){
                            flag=0;
                            break;
                        }
                        if(nums2[j]>=nums2[k]){
                            flag=1;
                        }
                        
                        

                    }
                   
                    break;
                    
                }
                
            }
             if(j==m-1){
                          flag=1;  
                        }
                        if(!flag){
                       result.push_back(nums2[k]); 
                    }
                        
                    if(flag){
                        result.push_back(-1); 
                    }
        }
        return result;
    }
        
    
};