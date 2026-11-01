class Solution {
    public int[] frequencySort(int[] nums) {
      HashMap<Integer,Integer> freq = new HashMap<>();
        // we get all freq from this loop
      for(int x:nums){
        freq.put(x,freq.getOrDefault(x,0)+1);
      }
      int n = nums.length;
    // create arr for storing values 
      Integer arr[] = new Integer[n];
    // copying elements from array
      for(int i=0;i<n;i++){
        arr[i] = nums[i];
      }

    Arrays.sort(arr,new Comparator<Integer>(){
        public int compare(Integer a, Integer b){
            if(freq.get(a) == freq.get(b)){
                return b-a;
            }
            return freq.get(a) - freq.get(b);
        }
    });

    for(int i=0;i<n;i++){
        nums[i] = arr[i];
    }

    return nums;
    }
}