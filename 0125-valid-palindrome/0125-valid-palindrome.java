class Solution {
    public boolean isPalindrome(String s) {

      int start = 0;
      int end = s.length()-1;

      s = s.toLowerCase();

      while(start<=end){
        char ch1 = s.charAt(start);
        char ch2 = s.charAt(end);

        if(!(ch1 >= 'a' && ch1 <= 'z' || ch1 >= '0' && ch1<='9')){
            start++;
            continue;
        }

        if(!(ch2 >= 'a' && ch2 <= 'z' || ch2 >= '0' && ch2<='9')){
            end--;
            continue;
        }

        if(ch1!=ch2) 
            return false;

        start++;
        end--;
      }
      return true;
    }
}