public class thread {
    public static void main(String[] args) {
        Runnable task=()->{ for(int i=100;i<20000000;i++)
            {
                System.out.print(" "+i);
            };};
        // new Thread(task).start();
        Runnable task2=()->{
            
            for(int i=0;i<100000000;i++)
            {
                System.out.print(""+i);
            };
        };
        new Thread(task).start();
        new Thread(task2).start();
    }
}
