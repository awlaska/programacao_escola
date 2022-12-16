package cap7;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class iterator {
    public static void main(String[] args) {
        List<String> pessoas = new ArrayList<>();
        pessoas.add("Maria");
        pessoas.add("Jose");
        pessoas.add("Ana");
        pessoas.add("Manuel");
        pessoas.add("Joaquim");
        Iterator<String> iter = pessoas.iterator();
        while (iter.hasNext()){
            String p = iter.next();
            if (p.equals("Manuel")){
                iter.remove();
            }
        }
    }
}
