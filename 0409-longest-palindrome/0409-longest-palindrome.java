class Solution {
    public int longestPalindrome(String s) {
        HashMap<Character,Integer> fre = new HashMap<>();

        int res=0;
        int oddCount=0;
        for(char ch:s.toCharArray()){
            fre.put(ch,fre.getOrDefault(ch,0)+1);
            int curFre = fre.get(ch);
            if(curFre%2==0){
                res+=2;
                oddCount--;
            }else{
                oddCount++;
            }

        }
        if(oddCount>0){
            res+=1;
        }
        return res;


    }
}