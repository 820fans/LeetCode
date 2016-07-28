class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0) return 0;
        
        int index=0,temp=nums[0];
        for(int i=1;i<n;i++){
            if(temp!=nums[i]){
                temp=nums[i];
                index++;
                nums[index]=temp;
            }
        }
        
        return index+1;
    }
};
