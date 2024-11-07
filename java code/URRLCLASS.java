import java.net.*;  
public class URRLCLASS {
      
public static void main(String[] args){  
try{  
URL url=new URL("https://bisxxal.github.io/Two-Good/");  
  
System.out.println("Protocol: "+url.getProtocol());  
System.out.println("Host Name: "+url.getHost());  
System.out.println("Port Number: "+url.getPort());  
System.out.println("File Name: "+url.getFile());  
  
}catch(Exception e){System.out.println(e);}  
}  
}  
 