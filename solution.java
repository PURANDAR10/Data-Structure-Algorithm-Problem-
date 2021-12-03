import java.util.Scanner;

public class solution {
    public static void main(String[] args) {
        System.out.println("Program Startted");
        // Scanner s=new Scanner(System.in);
        // String s1=s.nextLine();
        String s1="2,4,6,8";
        // System.out.print(s1);
        String[] s2=s1.split(",",2);
        int arr[]={3,4,5,6,7,8,9,14};
        int[] arr2=new int[10];
        int m=0;

        for(int a:arr)
        {
            arr2[m]=a;
            m++;
            
        }
        for(int a:arr2)
        {
            if(a==0)
            {
                break;
            }
            System.out.print(a);
        }
        // System.out.print(s2[1]);
        for(String p:s2)
        {
            System.out.println(p);
        }

    }
    
}