class Solution {
    public int myAtoi(String s) {
        int i = 0;
        int l = s.length();

        // ignore all whiteSpaces
        while(i<l && Character.isWhitespace(s.charAt(i))){
            i++;
        }
        
        // if no  more charcter left
        if(i == l){
            return 0;
        }

        char sign = s.charAt(i);
        boolean negative = false;
        if(sign == '+'){
            i++;
        }else if(sign == '-'){
            negative=  true;
            i++;
        }else if(!Character.isDigit(s.charAt(i))){
            return 0;
        }

        // if no  more charcter left
        if(i == l){
            return 0;
        }

         // ignore all whiteSpaces
        while(i<l && s.charAt(i) == '0'){
            i++;
        }

         // if no  more charcter left
        if(i == l){
            return 0;
        }

        int value = 0;
        int max = Integer.MAX_VALUE/10;
        int min = Integer.MIN_VALUE/10;

        while(i<l && Character.isDigit(s.charAt(i))){
            int digit = s.charAt(i)- '0';

            if(value > max){
                return Integer.MAX_VALUE;
            }else if(value == max && digit > 7){
                return Integer.MAX_VALUE;
            }

            if(value < min){
                return Integer.MIN_VALUE;
            }else if(value == min && digit > 8){
                return Integer.MIN_VALUE;

            }

            if(negative){
                value = value*10+(-digit);
            }else{
                value = value*10 +digit;

            }
            i++;
        }
        return value;
    }
}