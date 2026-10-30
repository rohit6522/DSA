class Solution {
    public boolean containsDuplicate(int[] nums) {
        
       HashSet<Integer> ans = new HashSet<>();

        for(int i:nums){
            if(ans.contains(i)){
                return true;
            }
            ans.add(i);
        }
        return false;
      

    }
}