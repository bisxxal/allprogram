class hello1 implements Runnable {
  public void run(){
    for(int i=0;i<100;i++){
        System.out.println(i+"in A ");
    }
   }
}

class hello2 implements Runnable {
  public void run(){
    for(int i=0;i<100;i++){
        System.out.println(i+"in b ");
    }
   }
}
class hello {
    public static void main(String[] args) {
    hello1 o = new hello1();
    hello2 o2 = new hello2();

    Thread t1 = new Thread(o);
    Thread t2 = new Thread(o2);
    t1.start();
    t2.start();

    }
} 