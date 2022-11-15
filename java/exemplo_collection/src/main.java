import java.util.*;

public class main {
    public static void main(String[] args) {

        //List<T> / ArrayList<T>
        //Set<T> / HashSet<T>
        //Map<K, V> / HashMap<K, V>

        List<Contacto> contactos = new ArrayList<>(); //new LinkedList<>();

        Contacto cont1 = new Contacto("Ana", "912345678");
        Contacto cont3 = new Contacto("Manuel", "932345678");
        contactos.add(cont1);
        contactos.add(0, cont3);

        Contacto cont2 = new Contacto("Joaquim", "123456789");

        contactos.add(cont2);
        contactos.add(cont3);

        for (Contacto c : contactos){
            System.out.println(c);
        }

        if (contactos.contains(cont1))
            System.out.println("CONTEM cont1 !!!");
        else
            System.out.println("NÃO CONTEM cont1 !!!");

        if (contactos.contains(cont2))
            System.out.println("CONTEM cont2 !!!");
        else
            System.out.println("NÃO CONTEM cont2 !!!");

        System.out.println(contactos.get(2).toString());
        // -------------------------------------------------
        System.out.println("\nSETS SETS SETS SETS SETS\n\n");
        Set<Contacto> contactoSet = new HashSet<>();

        contactoSet.add(cont1);
        contactoSet.add(cont3);
        contactoSet.add(cont2);
        contactoSet.add(cont3);

        for(Contacto c : contactoSet){
            System.out.println(c);
        }

        // -------------------------------------------------
        System.out.println("\nMAPS MAPS MAPS MAPS MAPS\n\n");
        Map<String, Contacto> contactoMap = new HashMap<>();

        contactoMap.put("Ana", cont1);
        contactoMap.put("Joaquim", cont3);
        contactoMap.put("Joaquim", cont2);

        for(String s : contactoMap.keySet()){
            System.out.println(s + " - " + contactoMap.get(s));
        }

        for(Contacto c : contactoMap.values()){
            System.out.println(c);
        }
    }
}