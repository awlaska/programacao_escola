package cap7;

import java.util.HashSet;
import java.util.Set;

public class Conjuntos {
    public static void main(String[] args) {
        Set<Integer> conjInt = new HashSet<>();

        conjInt.add(5); conjInt.add(7);
        conjInt.add(15); conjInt.add(2);

        conjInt.add(5); conjInt.add(2);
        conjInt.remove(15);

        System.out.println("elementos da conjunto");

        for(Integer i : conjInt)
            System.out.println(i);
    }
}
