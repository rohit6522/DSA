class Solution {
    public int[] twoSum(int[] nums, int target) {

        int n = nums.length;
        // basic approach
        
    //    for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         int sum= nums[i]+nums[j];
    //         if(sum == target){
    //             return new int[]{i,j};
    //         }
    //     }
    //    }
    //    return new int[]{};
     
     HashMap<Integer,Integer>ans = new HashMap<>();
     for(int i=0;i<n;i++){
        int first = nums[i];
        int sec = target-first;

        if(ans.containsKey(sec)){
            return new int[]{i,ans.get(sec)};
        }

        ans.put(first,i);
     }

     return new int[]{};


    }
}