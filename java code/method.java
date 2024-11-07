public class method {
    int myFun(int a , int b){
       int z = a + b ;
       return z;
    }
    int myFun(int a ,int x, int b){
       int z = a+x + b ;
       return z;
    }
    public static void main(String[] args) {
        
        method obj = new method();
        int a=3,b=23,x = 78;
        int c =obj.myFun(a,b);
        int c2 =obj.myFun(a,x,b);
        System.out.println(c);
        System.out.println(c2);
        
    }
}
