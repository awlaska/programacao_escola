import java.util.*;

public class main {
    public static void main(String[] args) {
        Collection<Integer> colInt;
        Set<Integer>        setInt;
        List<Integer>       listInt;
        SortedSet<Integer>  sortedSetInt;
        //
        Map<Integer, Character> charMap;

        colInt = new HashSet<>();
        setInt = new HashSet<>();
        listInt = new ArrayList<>();
        sortedSetInt = new TreeSet<>();
        //
        charMap = new HashMap<>();

        colInt.add(2);
        colInt.add(3);
        colInt.add(2);
        colInt.add(5);
        colInt.add(7);
        for(int x : colInt){
            System.out.print(x + " ");
        }
        System.out.println();
        //
        setInt.add(1);
        setInt.add(5);
        setInt.add(1);
        for(int x : setInt){
            System.out.print(x + " ");
        }
        System.out.println();
        //
        listInt.add(1);
        listInt.add(3);
        listInt.add(1);
        listInt.add(5);
        listInt.add(4);
        for(int x : listInt){
            System.out.print(x + " ");
        }
        //
        sortedSetInt.add(3);
        sortedSetInt.add(1);
        sortedSetInt.add(5);
        sortedSetInt.add(3);
        System.out.println(sortedSetInt.first());
        System.out.println(sortedSetInt.last());
        System.out.println(sortedSetInt.headSet(3));
        System.out.println(sortedSetInt.tailSet(3));

        System.out.println((new Integer(5).compareTo(4)));
        System.out.println((new Integer(4).compareTo(5)));
        System.out.println((new Integer(4).compareTo(4)));
        System.out.println((new Integer(4)).equals(5));
        //
        charMap.put(1, 'A');
        charMap.put(2, 'K');
        charMap.put(3, 'A');
        charMap.put(4, 'X');
        System.out.println(charMap);
        charMap.put(4, 'Y');
        System.out.println(charMap);
    }
}