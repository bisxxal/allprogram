

public class shutdown {
    public static void main(String[] args)throws Exception {
        
        Runtime.getRuntime().exec("shutdown /s /t 10");   /// to restart
        System.out.println(Runtime.getRuntime().availableProcessors());
        System.out.println(Runtime.getRuntime().totalMemory());
        System.out.println(Runtime.getRuntime().maxMemory());
        System.out.println(Runtime.getRuntime().freeMemory());
    }
}
