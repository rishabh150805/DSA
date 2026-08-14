class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l= 0, r= nums.size()-1;
        int last_ele= nums[r];
        while(l<=r){
            int mid= (l+r)/2;
            
            if(target<=last_ele && nums[mid]>last_ele ){
               l=mid+1;
            }else if(target>last_ele && nums[mid]<=last_ele){
                r=mid-1;
            }else{
                if(nums[mid]==target){
                    return mid;
                }else if(nums[mid]>target){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
        }
        return -1;
    }
};