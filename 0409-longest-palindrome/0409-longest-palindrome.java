import java.util.HashMap;

class Solution {
    public int longestPalindrome(String s) {
        HashMap<Character,Integer>freq = new HashMap<>();

        int ans = 0;
        int oddCount=0;

        for(char ch:s.toCharArray()){
            freq.put(ch,freq.getOrDefault(ch,0)+1);

            int currFreq = freq.get(ch);
            if(currFreq%2==0){
                ans+=2;
                oddCount--;
            }else{
                oddCount++;
            }
        }
        if(oddCount>0){
            ans+=1;
        }
        return ans;

    }
}