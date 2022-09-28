package d_multiplos;

public class Main {
    public static void main(String[] args) {
        int i = 0;

        while (i <= 1000) {
            if((i % 3 == 0) && (i % 9 != 0)) {
                System.out.println(i);
                i++;
            } else {
                i++;
            }
        }
    }
}