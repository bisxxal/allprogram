import java.io.*;
import java.net.*;

public class MyServer {
 public static void main(String[] args) {
 try {
            ServerSocket serverSocket = new ServerSocket(12345);
           
            while (true) {
                Socket socket = serverSocket.accept();
                System.out.println("Client connected: " + socket);

                DataInputStream dis = new DataInputStream(socket.getInputStream());
                DataOutputStream dos = new DataOutputStream(socket.getOutputStream());

                String data = dis.readUTF();

                try {
                    int number = Integer.parseInt(data);
                    int result = digitSum(number);
                    dos.writeUTF("Sum of digits: " + result);
                } catch (NumberFormatException e) {
                    dos.writeUTF("Invalid input. Please send a valid number.");
                }

                socket.close();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static int digitSum(int n) {
        int sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
}

 