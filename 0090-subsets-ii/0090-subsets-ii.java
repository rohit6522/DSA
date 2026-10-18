class Solution {
    static void solve(int[] nums,int index,  List<List<Integer>>output,  List<Integer>ans){
        if(index >= nums.length){
            output.add(new ArrayList<>(ans));
            return;
        }

        int curr = nums[index];
        ans.add(curr);
        solve(nums,index+1,output,ans);

        ans.remove(ans.size()-1);
        while(index+1 < nums.length && nums[index] == nums[index+1]){
            index++;
        }
        solve(nums,index+1,output,ans);
    }

    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>>output = new ArrayList<>();
        List<Integer>ans = new ArrayList<>();

        int index = 0;
        solve(nums,index,output,ans);
        return output;
    }
}