package collection_Framwork;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class arrayList {
    public static void main(String[] args) {
        ArrayList<Integer> l = new ArrayList<>();
        ArrayList<String> l1 = new ArrayList<String>();// Creating arraylist
        // ArrayList<Integer> list = new ArrayList<>();
        // ArrayList list=new ArrayList() ; // old NON - generic

        l1.add("Mango");// Adding object in arraylist
        l1.add("Apple");
        l1.add("Banana");
        l1.add("Grapes");
        l1.add("ladcac");
        System.out.println(l1.size());
        ;
        System.out.println("NOw size is " + l1.size());
        ;
        l.add(2);
        l.add(1);
        l.add(5);
        l.add(3);
        l.add(2, 10001);
        System.out.println(l1);
        System.out.println(l);

        ArrayList<Integer> i = new ArrayList<Integer>();
        i.add(2000);
        i.add(9000);
        i.add(4000);
        l.addAll(i);
        System.out.println(l);

        System.out.println("index of " + l.get(6));

        // l.remove();
        l.set(1, 50000);
        l.remove(4);
        System.out.println(l.contains(50000));
        System.out.println(l);
        Collections.sort(l);
        System.out.println("After sorting list is ==> ");
        System.out.println(l);

        // for (var i : l)
        // System.out.println(i);
        // for (var i : l1)
        // System.out.println(i);
//                                                 INPUT IN ARRAY LIST 
        Scanner sc = new Scanner(System.in);
       int  n = sc.nextInt();
        ArrayList<Integer> a = new ArrayList<>(n);
        System.out.println("enter ele in arrayList");
        // a.add(n);
        for (int j = 0; j < n; j++) {
            int x = sc.nextInt();
            a.add(x);
        }
        System.out.println(a);

    }
}
