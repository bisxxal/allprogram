
class A extends Thread {
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("class A running i = " + i);
        }
    }
}

class B extends Thread {
    public void run() {
        System.out.println("id is b class "+ Thread.currentThread().getId());
        for (int i = 0; i < 10; i++) {
            System.out.println("class B running j = " + i);
        }
    }
}

class C extends Thread {
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("class C running k = " + i);
        }
    }
}

public class SetGetPriorityThread {
    public static void main(String[] args) {
        A obj1 = new A();
        B obj2 = new B();
        C obj3 = new C();

        obj3.setPriority(Thread.MAX_PRIORITY);
        obj2.setPriority(obj1.getPriority()+1);
        obj1.setPriority(Thread.MIN_PRIORITY);

        System.out.println("thread Prority of A class is " + obj1.getPriority());
        System.out.println("thread Prority of B class is " + obj2.getPriority());
        System.out.println("thread Prority of C class is " + obj3.getPriority());

        System.out.println("thread ID of A class is " + obj1.getId());
        System.out.println("thread ID of B class is " + obj2.getId());
        System.out.println("thread ID of C class is " + obj3.getId());

      
        obj1.start();
        obj2.start();
        obj3.start();
    }
}
