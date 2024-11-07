//                                                               BY RUNNABLE CLASS 

// class Aclxx implements Runnable
// {
//     // @override
//     public void run(){
//     for (int i=0;i<50 ;i++)
//     {
//         System.out.println("i am thared Aclxx "+ i);
//     }
// }

  
// }
// class Bclxx implements Runnable
// {
//     public void run(){
//     for (int i=0;i<50 ;i++)
//     {
//         System.out.println("i am thared Bclxx "+ i);
//     }
// }
// }

//                                          BY EXTENDING CLASS 
class Aclxx extends Thread
{
    public void run(){
    for (int i=0;i<50 ;i++)
    {
        System.out.println("i = "+ i);
    }
}
}
class Bclxx extends Thread
{
    public void run(){
    for (int i=0;i<50 ;i++)
    {
        System.out.println("j = "+ i);
    }
}
}

class Cclxx extends Thread
{
    public void run(){
    for (int i=0;i<50 ;i++)
    {
        System.out.println("k = "+ i);
    }
}
}
public class multitreading {
    public static void main(String[] args) {
        
        Aclxx t1 = new Aclxx();
        Bclxx t2 = new Bclxx();
        Cclxx t3 = new Cclxx();
        
        t1 .start();
        try{
                t1.join(1);
        }
        catch(Exception e){
            System.out.println("expetion as "+e);
        }
        t2 .start();
        t3 .start();

        
    }
}