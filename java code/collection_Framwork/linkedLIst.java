package collection_Framwork;

import java.util.Collections;
import java.util.LinkedList;

public class linkedLIst {

    public static void main(String[] args) {
        LinkedList<Integer> l = new LinkedList<>();
        l.add(1);
        l.add(2);
        l.add(3);
        l.add(4);
        l.add(5);

        for (var i : l) {
            System.out.print(i + " ");
        }
        System.out.println();

        l.addFirst(90);
        l.addLast(89);
        System.out.println(l);
        Collections.sort(l);
        System.out.println(l);
        System.out.println(l.get(3));
        l.poll();
        l.pollFirst();
        l.pollLast();
        l.removeFirst();
        l.removeLast();
        System.out.println(l);

        Object[] a = l.toArray();
        System.out.print("After converted LinkedList to Array: ");
        for (Object element : a)
            System.out.print(element + " ");
    }

}
