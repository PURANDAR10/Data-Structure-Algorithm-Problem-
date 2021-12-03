class sumNum {
    public static int count(String s)
    {
        int l=s.length();
    String temp="0";
        int sum=0;
        char[] p=s.toCharArray();
       for(char c:p)
       {
           if(Character.isDigit(c))
           {
               temp+=c;
           }
           else
           {
            sum+=Integer.parseInt(temp);
            temp="0";
           }
       }
       return Math.round(sum/l);
    }
    public static void main(String[] args) {
       String str="He9h9h1";
        System.out.print(count(str));
    }
}