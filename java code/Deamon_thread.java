
class Doremon extends Thread{

    public void run(){
        if(currentThread().isDaemon()){
            System.out.println("demon thrad ");
        }
        else{
            System.out.println(getName()+" user Thred ");
        }
    }
}
public class Deamon_thread {
    public static void main(String[] args) {
        
        Doremon d = new Doremon();
        Doremon d2 = new Doremon();
        Doremon d3 = new Doremon();

        d.setPriority(Thread.MAX_PRIORITY);
        System.out.println("the state is "+ d.getState());

        d.setDaemon(true);
        d.start();
        d2.start();
        d3.start();
        System.out.println("the state is "+ d.getState());  

    } 
}
