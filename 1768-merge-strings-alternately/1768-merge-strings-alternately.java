class Solution {
    public String mergeAlternately(String word1, String word2) {
        String ans = "";

      int i=0;
      int j=0;
      
      while(i<word1.length() || j< word2.length()){
        if(i < word1.length()){
            ans+=word1.charAt(i);
            i++;
        }

        if(j < word2.length()){
            ans+=word2.charAt(j);
            j++;
        }
      }
      return ans;
        
    }
}