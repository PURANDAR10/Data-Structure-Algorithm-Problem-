abstract class test  
{  
    static int i = 102;  
    static void TestMethod()  
    {  
        System.out.println("hi !! I am good !!");  
    }  
}  
public class TestClass extends test   
{  
    public static void main (String args[])  
    {  
        test.TestMethod();  
        System.out.println("i = "+test.i);  
    }  
}  
    
