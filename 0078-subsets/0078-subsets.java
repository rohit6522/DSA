class Solution {
    static void solve(int[] nums, int index, List<Integer> result, List<List<Integer>> ans){
        // base case
        if(index >= nums.length){
            ans.add(new ArrayList<>(result));
            return;
        }

        int curr = nums[index]; 
        result.add(curr);
        solve(nums,index+1,result,ans);
        result.remove(result.size()-1);

        solve(nums,index+1,result,ans);
    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> result = new ArrayList<>();
        int index = 0;
         solve(nums,index,result,ans);
        return ans;
    }
}