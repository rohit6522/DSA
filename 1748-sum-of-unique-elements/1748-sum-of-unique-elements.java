class Solution {
    public int sumOfUnique(int[] nums) {
        int sum = 0;
        HashMap<Integer,Integer> ans = new HashMap<>();

        for(int num:nums){
           ans.put(num,ans.getOrDefault(num,0)+1);
        }

        for(int num:nums){
            if(ans.get(num)==1){
                sum+=num;
            }
        }
        return sum;
    }
}