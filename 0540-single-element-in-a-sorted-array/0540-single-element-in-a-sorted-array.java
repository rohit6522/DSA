class Solution {
    public int singleNonDuplicate(int[] nums) {
        int n = nums.length;
        int s = 0;
        int e = n-1;

        while(s <= e){
            int mid = s+(e-s)/2;
            // single elmnt
            if(s == e){
                return nums[s];
            }
            // non-single elmnt

            int curValue = nums[mid];
            int preValue = -1;

            if(mid-1 >= 0){
                preValue = nums[mid-1];
            }

            int nextValue = -1;
            if(mid+1 < n){
                nextValue = nums[mid+1];
            }

            if(curValue != preValue && curValue != nextValue){
                return curValue;
            }

            if(curValue != preValue && curValue == nextValue){
                int startingIndexOfPair = mid;
                if(startingIndexOfPair % 2 ==  1){
                    e = mid-1;
                }else{
                    s = mid+1;
                }
            }else if(curValue == preValue && curValue != nextValue){
                int endingIndexOfPair = mid;
                if(endingIndexOfPair % 2 ==  1){
                    s = mid +1;
                }else{
                    e = mid - 1;
                }
            }
        }
        return -1;
    }
}