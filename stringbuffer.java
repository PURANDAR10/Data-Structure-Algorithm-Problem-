class stringbuffer{
    public static void main(String[] args) {
        StringBuffer str=new StringBuffer();
        
        str.append("hi how are you");
        System.out.print(str);
        str.insert(4, "lomud");
        System.out.print(str);
    }
}