public class replacechar {
    // public static void replacechar(String s)
    // {
    //     if(s.charAt(0)='/0')
    //     {
    //         return 0;
    //     }
    //     else if(s.charAt(0)=='b')
    //     {
    //         s
    //     }
    // }
    public static void main(String[] args) {
        String s1="ababaaabaabb";
        // System.out.println(s1.charAt(0));
        // char[] arr=s1.toCharArray();
        // System.out.println(arr[0]); 
        // replacechar(s1);
        String s2=s1.replaceAll("a","x");
        System.out.println(s2);

        
        
    }
}
