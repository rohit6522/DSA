
class Solution {
    static void solve(int[] candidates, int target, int index,
        List<List<Integer>> ans, List<Integer> output) {

        if (target == 0) {
            ans.add(new ArrayList<>(output));
            return;
        }

        if (index >= candidates.length || target < 0) {
            return;
        }

        // Pick the current element
        output.add(candidates[index]);
        solve(candidates, target - candidates[index],
              index + 1, ans, output);

        // Backtrack
        output.remove(output.size() - 1);

        // Skip duplicate elements at this recursion level
        while (index + 1 < candidates.length &&
               candidates[index] == candidates[index + 1]) {
            index++;
        }

        // Do not pick the current element
        solve(candidates, target, index + 1, ans, output);
    }

    public List<List<Integer>> combinationSum2(int[] candidates,int target) {
        Arrays.sort(candidates);

        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> output = new ArrayList<>();

        solve(candidates, target, 0, ans, output);

        return ans;
    }
}
