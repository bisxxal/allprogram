public class warpper_classs {
    public static void main(String[] args) {
        
        int a=20;
        Integer i=Integer.valueOf(a);//converting int into Integer explicitly
        Integer j=a;//autoboxing, now compiler will write Integer.valueOf(a) internally  
          
        System.out.println(a+" "+i+" "+j);  


        // Integer b=new Integer(3);    
        // Integer c = new Integer(3);
        // int p=b.intValue(); //converting Integer to int explicitly  
        // int Q=b; //unboxing, now compiler will write a.intValue() internally

        // System.out.println(a + "  " + i + "  " + j);
    }
}