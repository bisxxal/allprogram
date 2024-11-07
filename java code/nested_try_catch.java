public class nested_try_catch {
    public static void main(String[] args) {
        try{
                try{
                    System.out.println(2/0);
                }
                catch(ArithmeticException e){
                System.out.println("handel the arithmetic exp "+e);

            try{
                int a[] = {1,2,3,4};
                System.out.println(a[9]);
            }
                catch(ArrayIndexOutOfBoundsException e2){
                System.out.println("handel the array boundy exceptin "+e2);
            }
        }
        }
        catch(Exception e){
            System.out.println("handel the exceptin "+e);
        }
        finally{
            System.out.println("finnaly execute ");
        }
    }
}
