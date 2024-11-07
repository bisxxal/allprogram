class AClass extends Thread {
    public AClass(String name) {
        super(name);
    }

    public void run() {
        for (int i = 0; i < 40; i++) {
            if (i == 10) {
                Thread.yield();
            }
            System.out.println("from thread AClass = " + i);
        }
        System.out.println("end of Thread class A");
    }
}

class BClass extends Thread {
    public void run() {
        for (int i = 0; i < 40; i++) {
            System.out.println("from thread BClass = " + i);
        }
        System.out.println("end of Thread class B");
    }
}

class CClass extends Thread {
    public void run() {
        for (int i = 0; i < 40; i++) {
            if (i == 15) {
                try {
                    sleep(10); // Sleep for 1 second
                    System.out.println("from thread C Class = " + i);
                } catch (InterruptedException e) {
                    System.out.println("exception is " + e);
                }
            }
        }
        System.out.println("end of Thread class C");
    }
}

public class ThreadMethods {
    public static void main(String[] args) {
        AClass obj1 = new AClass("Bisxxl");
        BClass obj2 = new BClass();
        CClass obj3 = new CClass();

        obj2.start();
        obj1.start();
        System.out.println("thread id is " + obj1.getId());
        System.out.println("thread Prority of A class is " + obj1.getPriority());
        System.out.println("thread Prority of B class is " + obj1.getPriority());
        System.out.println("thread Prority of C class is " + obj1.getPriority());
        System.out.println("thread name is " + obj1.getName());
        obj3.start();
    }
}
