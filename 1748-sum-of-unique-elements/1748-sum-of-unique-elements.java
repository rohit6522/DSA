class Solution {
    public int sumOfUnique(int[] nums) {
        int sum = 0;
        // HashMap<Integer,Integer> ans = new HashMap<>();

        // for(int num:nums){
        //    ans.put(num,ans.getOrDefault(num,0)+1);
        // }

        // for(int num:nums){
        //     if(ans.get(num)==1){
        //         sum+=num;
        //     }
        // }
        // return sum;

        int n = nums.length;
        int arr[] = new int[101];

        for(int i=0;i<n;i++){
            int a = nums[i];
            arr[a]++;
        }

        for(int j=0;j<101;j++){
            if(arr[j]==1){
                sum+=j;
            }
        }
        return sum;

    }
}