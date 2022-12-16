package cap7;

import java.util.SortedSet;
import java.util.TreeSet;

public class ConjuntosOrdenados {
    public static void main(String[] args) {
        SortedSet<Integer> conjOrd = new TreeSet<>();
        conjOrd.add(5); conjOrd.add(7); conjOrd.add(15); conjOrd.add(2);
        conjOrd.add(5); conjOrd.add(2);
        for(int x : conjOrd)
            System.out.println(x);
        System.out.println("-------------------");
        conjOrd.remove(7);
        conjOrd.remove(Integer.valueOf(5));
        for(int x : conjOrd)
            System.out.println(x);
    }
}
