
import java.util.LinkedList;
import java.util.Queue;

public class queue2 {
    public static void main(String[] args) {
        Queue<Integer> pt=new LinkedList<Integer>();
        pt.add(50);
        pt.add(500);
        System.out.println(pt.size());
        System.out.println(pt.peek());
        
    }
}
