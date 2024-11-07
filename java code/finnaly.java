public class finnaly {
    public static void myfun() {

        int a=9,b=7;
        try{
        System.out.println(a+b);
        return;
        }
        // catch(Exception r){
            
        // }
        finally{
            System.out.println("i am execute ");
        }
    }
    public static void main(String[] args) {
        
        myfun();
    }
}
