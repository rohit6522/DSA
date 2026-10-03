class Solution {

    static int solve(int nums[],int target,int s, int e){

        if(s>e){
            return -1;
        }
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }else if(target > nums[mid]){
            s = mid+1;
        }else{
            e=mid-1;
        }
       return solve(nums,target,s,e);
    }
    public int search(int[] nums, int target) {
        int s = 0;
        int e = nums.length-1;

      int ans = solve(nums,target,s,e);
      return ans;
    }
}