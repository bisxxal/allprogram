//     using   abstrack class 
// abstract class outer{
//     abstract void muout();
// }

//     using inter face 

interface outer{
    public void muout();
    public void muout2();
}
public class Anonymous_inner_class {
    public static void main(String[] args) {
        
        outer obj = new outer() {
            public void muout(){
                System.out.println("hello coom on ");
            }
            
            
            public void muout2() {

                System.out.println("hello coom on meth2 2 ");
            }
        };
         obj.muout();
         obj.muout2();
    }
}
