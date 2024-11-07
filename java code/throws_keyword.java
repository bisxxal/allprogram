public class throws_keyword {
    static void fun () throws IllegalAccessException
	{
		System.out.println("Inside fun(). ");
		throw new IllegalAccessException("demo");
	}
    
    public static void main(String[] args) throws InterruptedException
    { 
        // for(int i= 0;i<10;i++){
        //     System.out.println(i);
        //     Thread.sleep(1000);
        // }

		try {
			fun();
		}
		catch (IllegalAccessException e) {
			System.out.println("caught in main.");
		}
	}
}