import java.io.*;
import java.net.*;
import java.util.Scanner;

public class MyClint {
    public static void main(String[] args) {
            try {
            Socket socket = new Socket("127.0.0.1", 12345);
            DataInputStream dis = new DataInputStream(socket.getInputStream());
            DataOutputStream dos = new DataOutputStream(socket.getOutputStream());

            Scanner scanner = new Scanner(System.in);
            System.out.print("Enter a number: ");
            int number = scanner.nextInt();

            dos.writeUTF(Integer.toString(number));

            String response = dis.readUTF();
            System.out.println(response);

            socket.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}


// import java.io.*;
// import java.net.*;

// public class Client {
//     public static void main(String[] args) {
//         try (Socket s = new Socket("localhost", 12345);
//              BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
//              PrintWriter w = new PrintWriter(s.getOutputStream(), true);
//              BufferedReader serverReader = new BufferedReader(new InputStreamReader(s.getInputStream()))) {

//             System.out.print("Enter a number: ");
//             int n = Integer.parseInt(r.readLine());
//             w.println(n);
//             System.out.println("Sum of digits: " + serverReader.readLine());

//         } catch (Exception e) {
//             e.printStackTrace();
//         }
//     }
// }
