public class selectionsort {
    public static void selectionsort(int[] arr)
    {
        int n=arr.length;
        int min=arr[0];
        for(int i=0;i<n;i++)
        {
            int min_idx=i;
            for(int j=i+1;j<n;j++)
            {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;

            }
            int temp=arr[min_idx];
            arr[min_idx]=arr[i];
            arr[i]=temp;
         }
    }
   
}
public static void PrintArray(int[] arr)
{
    for(int i=0;i<arr.length;i++)
    {
        System.out.print(arr[i]+" ");
    }
}
    public static void main(String[] args) {
        int arr[]={1,122,4,12,5,12,9,3};
        PrintArray(arr);
        System.out.println();
        selectionsort(arr);
        PrintArray(arr);


        
    }
    
}
