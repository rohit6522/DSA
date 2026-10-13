// class Solution {
//     public List<Integer> findAnagrams(String s, String p) {
//         int[] pCount = new int[26];
//         int[] sCount = new int[26];

//         List<Integer> result = new ArrayList<>();

//         // count freq of a string

//         for(char c:s.toCharArray()){
//             pCount[c-'a']++;
//         }

//         for(int i=0;i<s.length();i++){
//              sCount[s.charAt(i) - 'a']++;

//              // remove the un matched character

//              if(i >= p.length()){
//                 sCount[s.charAt(i - p.length()) - 'a']--;
//              }

//              //compare 

//              if(Arrays.equals(pCount,sCount)){
//                 result.add(i- p.length()+1);
//              }

//         }
//         return result;
//     }
// }




class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int[] pCount = new int[26];
        int[] sCount = new int[26];

        List<Integer> result = new ArrayList<>();

        if (p.length() > s.length()) {
            return result;
        }

        for (char c : p.toCharArray()) {
            pCount[c - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            sCount[s.charAt(i) - 'a']++;

            if (i >= p.length()) {
                sCount[s.charAt(i - p.length()) - 'a']--;
            }

            if (i >= p.length() - 1 && Arrays.equals(pCount, sCount)) {
                result.add(i - p.length() + 1);
            }
        }

        return result;
    }
}
