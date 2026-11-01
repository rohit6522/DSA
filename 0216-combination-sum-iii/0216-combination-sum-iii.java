class Solution {

        static void solve(int[] candidates, int target, int index,
        List<List<Integer>> ans, List<Integer> output, int count, int k) {

            if(count > k){
                return;
            }
        if (count == k && target == 0) {
            ans.add(new ArrayList<>(output));
            return;
        }

        if (index >= candidates.length || target < 0) {
            return;
        }

        // Pick the current element
        output.add(candidates[index]);
        solve(candidates, target - candidates[index],
              index + 1, ans, output, count+1,k);

        // Backtrack
        output.remove(output.size() - 1);

        // Skip duplicate elements at this recursion level
        while (index + 1 < candidates.length &&
               candidates[index] == candidates[index + 1]) {
            index++;
        }

        // Do not pick the current element
        solve(candidates, target, index + 1, ans, output,count,k);
    }
    public List<List<Integer>> combinationSum3(int k, int n) {
        //  Arrays.sort(candidates);

        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> output = new ArrayList<>();
        int target = n;
        int[] candidates = {1,2,3,4,5,6,7,8,9};
        int count = 0;
        solve(candidates, target, 0, ans, output,count,k);

        return ans;
    }
}