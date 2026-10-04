class Solution {
    public String addBinary(String a, String b) {
       int l1 = a.length()-1;
       int l2 = b.length()-1;

       int c = 0;
       int base = 2;

       StringBuilder res = new StringBuilder();
       while(l1>=0 || l2>=0){
        int t1 = 0;
        int t2 = 0;
        int sum;

        if(l1>=0)
            t1 = a.charAt(l1--)-'0';
        if(l2>=0)
            t2 = b.charAt(l2--)-'0';

        sum = t1+t2+c;

        if(sum >= base){
            c= 1;
            sum=sum-base;
        }
        else
            c = 0;
            res.append(sum);
       }

       if(c==1)
        res.append(c);

        return res.reverse().toString();
    }
}