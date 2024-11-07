interface addSub{
    void add(int a, int b);
    void sub(int a, int b);
}
interface mulDiv{
    void mul(int a, int b);
    void div(int a, int b);
}

interface cal extends addSub , mulDiv{
    void printresult(int res);
}

class calulater implements cal{
    public void add(int a ,int b){
        int res = a+b;
        printresult(res);
    }
    public void sub(int a ,int b){
        int res = a-b;
        printresult(res);
    }
    public void mul(int a ,int b){
        int res = a*b;
        printresult(res);
    }
    public void div(int a ,int b){
        int res = a/b;
        printresult(res);
    }

    public void printresult(int res ){
        System.out.println("valu of a and b is "+res);
    }

}
public class interface_inheritance {
    public static void main(String[] args) {
        
        calulater obj = new calulater();
        obj.add(23, 45);
        obj.sub(100, 45);
        obj.mul(6, 9);
        obj.div(45 , 5);

    }
}
