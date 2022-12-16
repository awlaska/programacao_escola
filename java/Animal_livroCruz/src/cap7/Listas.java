package cap7;

import java.util.ArrayList;
import java.util.List;

public class Listas {
    public static void main(String[] args) {
        List<Integer> listaInt = new ArrayList<>();
//
        listaInt.add(5); listaInt.add(7);
        listaInt.add(15); listaInt.add(2);
        listaInt.add(5); listaInt.add(2);
        listaInt.remove(Integer.valueOf(5));
//
        System.out.println("elementos da lista");
        for(Integer i : listaInt)
            System.out.println(i);
    }
}
