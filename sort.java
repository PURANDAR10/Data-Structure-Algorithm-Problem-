import java.util.Arrays;

public class sort {
    
    public static int sum(int[] arr)
    {
        int sum=0;
    int input=6;
        Arrays.sort(arr);
        sum=arr[input-1]+arr[0];
        return sum;

        
    }
    public static void main(String[] args) {
        int[] arr={1,5,7,3,4,2};
        System.out.print(sum(arr));
    }
}
