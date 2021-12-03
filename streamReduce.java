import java.util.*;
import java.util.stream.IntStream;
import java.util.stream.Stream;
  
class streamReduce {
  
    // Driver code
    public static void main(String[] args)
    {
  

       
        Stream<Integer> stream = Stream.of(2,3,4);
              int product= stream.reduce(0,(num1, num2) -> (num1+num2)*2);
  Arra
        // Displaying the product
        System.out.println("The product is : " + product);
    }
}