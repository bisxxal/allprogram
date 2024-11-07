class base{
    int data;

    public void myfun(int x){
        data = x;
        System.out.println("the value of x is " + data*data*data);
    }
}

class derived extends base{
    int data2 ;
    void myfun2(int x){
        data2 = x;
        myfun(12);                         
        System.out.println("the value of x is inside the derived class  " + data);
        System.out.println("the value of y is " + data2*data);
    }
}
public class inheritance {
    
    public static void main(String[] args) {
        
        derived d = new derived();

        d.myfun(4);
        d.myfun2(3);
    }
}
