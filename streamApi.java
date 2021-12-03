import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collector;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class streamApi {
    public static void main(String[] args) {
        List<Integer> list=new ArrayList<>();
        list.add(10);
        list.add(5);
        list.add(30);
        // Stream<List> stm=Stream.of(list);
        Stream<Integer> stream=list.stream();
    List<Integer> ls= stream.filter(e->e%2==0).collect(Collectors.toList());
    for(int i:ls)
    {
        System.out.println(i);
    }
    
    }
}
