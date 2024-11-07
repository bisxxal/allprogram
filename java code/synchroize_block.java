class Table{

    public void PrintTable(int n){
/// let here 100 line of code 

        synchronized(this){
            for(int i = 1;i<10;i++){
                System.out.println(n*i);
            }   
        }
/// let here 100 line of code 

    }
}

class MyThred1 extends Thread{

    Table t;
    MyThred1(Table t){
        this.t = t;
    }
    public void run(){
        t.PrintTable(5);
    }

}

class MyThred2 extends Thread{

    Table t;
    MyThred2(Table t){
        this.t = t;
    }
    public void run(){
        t.PrintTable(100);
    }

}
public class synchroize_block {
    public static void main(String[] args) {
        Table t = new Table();
        MyThred1 obj = new MyThred1(t);
        MyThred2 obj2 = new MyThred2(t);

        obj.start();
        obj2.start();

    }
}
