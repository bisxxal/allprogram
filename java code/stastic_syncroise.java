class Bank extends Thread{
    static int bakl = 5000;
    static int withdraw;

    Bank(int withdraw){
        this.withdraw =withdraw;
    }

    public static synchronized void myfun(){
        String name = Thread.currentThread().getName();

        if(withdraw<=bakl){
            System.out.println(name+" withDraw");
            bakl = bakl-withdraw;
        }
        else{
            System.out.println("insufficent balance ");
        }
    }
   public void run(){
        myfun();
    }
}
public class stastic_syncroise {
    public static void main(String[] args) {
        Bank obj = new Bank(5000);
        Thread t1 = new Thread(obj);
        Thread t2 = new Thread(obj);
        t1.setName("bisxxal");
        t2.setName("Gudul");

        
        Bank obj2 = new Bank(5000);
        Thread t3 = new Thread(obj2);
        Thread t4 = new Thread(obj2);
        t4.setName("bisw");
        t3.setName("abhi");
        
        t2.start();
        t4.start();
        t3.start();
        t1.start();
    }
}
