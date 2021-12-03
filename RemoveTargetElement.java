class RemoveTargetElement {
    public static void remove(String s,String t)
    {
       String p= s.replaceAll(t,"");
       System.out.print(p);
    }
    public static void main(String[] args) {
        String str="hi how are you";
        String c="o";
        remove(str,c);
    }
}